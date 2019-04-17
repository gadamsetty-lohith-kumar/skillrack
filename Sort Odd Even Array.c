/*
Sort Odd Even Array

Given an array of N integers, the program must sort the integers present in odd positions if N is odd else must sort the integers present in even positions. The sorting must be in ascending order.

Boundary Condition(s):
1 <= N <= 99999

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The first line contains N integers separated by space.

Example Input/Output 1:
Input:
7
12 45 14 21 57 12 9

Output:
9 45 12 21 14 12 57

Example Input/Output 2:
Input:
10
78 121 34 56 12 34 89 18 33 90

Output:
78 18 34 34 12 56 89 90 33 12

*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k,n,l=0,o,m=0;
scanf("%d",&n);
int a[n],b[n/2];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(n%2==0)
l=1;
else
l=0;
for(i=l;i<n;i+=2)
{
    b[j]=a[i];
    j++;
}
for(i=0;i<j;i++)
{
    for(k=i+1;k<j;k++)
    if(b[i]>b[k])
    {
     m=b[i];
     b[i]=b[k];
     b[k]=m;
    }
}
j=0;
for(i=0;i<n;i++)
{  if(i==l)
     {
      printf("%d ",b[j]);
      l=l+2;
      j++;
     }
    else
    {
     printf("%d ",a[i]);
    }
}

}
