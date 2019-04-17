/*
Print Next Even Digit

Given a number N, the program must print the next even digit for each of the digits in N,

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains N.

Output Format:
The first line contains the specified output.

Example Input/Output 1:
Input:
123

Output:
244

Example Input/Output 2:
Input:
789

Output:
800
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i=0,j,n,a[10];
scanf("%d",&n);
if(n==0)
printf("2");
while(n>0)
{
    a[i]=n%10;
    n=n/10;
    i++;
}
for(j=0;j<i;j++)
{
    if(a[j]==9||a[j]==8)
    a[j]=0;
    else if(a[j]%2==0)
    a[j]+=2;
    else
    a[j]+=+1;
}
for(j=i-1;j>=0;j--)
printf("%d",a[j]);

}
