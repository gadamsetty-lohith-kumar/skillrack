/*
Alternate X Characters

Accept a string S and a position X as input. The program must print the alternate X characters in the string by printing the first X characters and ignoring the next X characters. This process is repeated until the last character is reached.

Boundary Condition(s):
2 <= Length of String, S <= 1000
2 <= X <= 10

Input Format:
The first line contains the string S.
The second line contains the value of X.

Output Format:
The first line contains the string with alternate X characters.

Example Input/Output 1:
Input:
helloworld
3

Output:
helorl

Example Input/Output 2:
Input:
environmentalpollution
5

Output:
envirtalpoon
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j=0,k,l=0;
char a[1000];
scanf("%[^\n] %d",a,&k);
l=strlen(a);
for(i=0;i<l;i++)
{
    printf("%c",a[i]);
    j++;
    if(j%k==0)
    i=i+k;
}
}
