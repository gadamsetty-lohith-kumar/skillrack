/*
Evaluation of Simple Expression

Given an expression as a string, the program must evaluate the expression and print the value of the expression. The allowed operations are addition (+), subtraction (-), multiplication (*), division (/) and power (^).
Note: Evaluation must be done from left to right direction.

Boundary Condition(s):
1 <= Length of the string <= 1000

Input Format:
The first line contains the expression.

Output Format:
The first line contains the value of the expression.

Example Input/Output 1:
Input:
2^2+3*4-2

Output:
26

Example Input/Output 2:
Input:
4+23-100

Output:
-73
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
 int i=0,j=0,l=0,m=0;
char a[500];
long long int k=0,n=0,b[500];
while((scanf("%lld%c",&b[i],&a[i]))>=1)
{
    i++;
}
k=b[0];
l=i;
j=0;
for(i=1;i<=l;i++)
{
    if(a[j]=='+')
    k=k+b[i];
    else if(a[j]=='-')
    k=k-b[i];
    else if(a[j]=='/')
    k=k/b[i];
    else if(a[j]=='*')
    k=k*b[i];
    else if(a[j]=='^')
    { n=k;
        for(m=1;m<b[i];m++)
        k=k*n;
    }
    j++;
}
printf("%lld",k);
}
