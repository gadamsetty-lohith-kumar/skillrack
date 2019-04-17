/*
Array Adjacent Sum M Times

An array of N integers and an integer value M are given as input. The program must calculate the sum of adjacent elements for each element for M times.

Boundary Condition(s):
2 <= N <= 1000
1 <= M <= 100

Input Format:
The first line contains N and M separated by space(s).
The second line contains N integers separated by space(s).

Output Format:
The first line contains N integers separated by a space.

Example Input/Output 1:
Input:
3 2
2 5 9

Output:
11 10 11

Explanation:
pass 1-> 5 11 5
pass 2-> 11 10 11

Example Input/Output 2:
Input:
5 3
12 13 10 8 3

Output:
34 57 63 48 29

Explanation
pass 1-> 13 22 21 13 8
pass 2-> 22 34 35 29 13
pass 3-> 34 57 63 48 29
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,m,n,a[1001],b[1001];
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
b[-1]=0;
b[n]=0;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    b[j]=a[j-1]+a[j+1];
    for(j=0;j<n;j++)
    a[j]=b[j];
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

