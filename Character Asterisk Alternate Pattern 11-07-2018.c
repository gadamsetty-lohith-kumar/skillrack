/*
Character Asterisk Alternate Pattern

An integer N is passed as the input. The program must print the pattern as given in the Example Input/Output Section.

Boundary Condition(s):
2 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The first N lines contain the pattern.

Example Input/Output 1:
Input:
3

Output:
a*b*c
*d*e*
f*g*h

Example Input/Output 2:
Input:
4

Output:
a*b*c*d
*e*f*g*
h*i*j*k
*l*m*n*
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n;
char a='a';
scanf("%d",&n);
k=n+(n-1);
for(i=0;i<n;i++)
{
    if(i%2==0)
    l=0;
    else
    l=1;
    for(j=0;j<k;j++)
    {
        if(l==0)
        {
            printf("%c",a);
            l=1;
            a++;
           if(a=='{')
           a='a';
        }
        else
        {
            printf("*");
            l=0;
        }
    }
    printf("\n");
}

}
