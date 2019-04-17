/*
Characters at Multiples of N Circularly

A string S and an integer N are given as input. The program must print the characters present at the positions of multiples of N.
If the multiple of N goes beyond the last character, then the string characters must be navigated in a cyclic manner till all the characters are printed.
Each time when a character is printed, the printed character is slashed and removed from the string.

Boundary Condition(s):
1 <= N, Length of string <= 1000

Input Format:
The first line contains S and N separated by space(s).

Output Format:
The first line contains the characters at positions of multiples of N.

Example Input/Output 1:
Input:
apple 2

Output:
plaep

Example Input/Output 2:
Input:
everything 4

Output:
rivhegnety
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=0,l,m,n;
char a[1000];
scanf("%s%d",a,&n);
l=strlen(a);
for(i=0;i<=l;i++)
{
    if(a[i]!='@')
    {
    j++;
    printf("%d %d %c\n",i,j,a[i]);
    }
    if(j%n==0&&a[i]!='@')
    {
   printf("%c\n",a[i]);
    a[i]='@';
    j=0;
    k++;
    }
    if(i==l-1)
    i=-1;
    if(k==l)
    break;
}

}
