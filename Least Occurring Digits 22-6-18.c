/*
Least Occurring Digits

A series of N integers is passed as input. The program must print the least occurring digit(s) in series of integers in ascending order.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains the series of integers separated by space(s).

Output Format:
The first line contains the least repeated digits in ascending order separated by a space.

Example Input/Output 1:
Input:
35 81 78 84 53

Output:
1 4 7

Example Input/Output 2:
Input:
12 21 68 55 71 29 60 879

Output:
0
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=0,l,b[10]={0},min=10000;
char a[1000];
scanf("%[^\n]",a);
l=strlen(a);
for(i=0;i<l;i++)
{
    j=a[i]-48;
    if(j>=0)
      b[j]=b[j]+1;
}
for(i=0;i<10;i++)
if(b[i]<min&&b[i]!=0)
{
min=b[i];
}
for(i=0;i<10;i++)
if(b[i]==min)
printf("%d ",i);
}
