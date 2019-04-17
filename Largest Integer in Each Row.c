/*
Largest Integer in Each Row

Given a matrix M of size R*C, the program must print the largest integer in each row.

Boundary Condition(s):
2 < R, C < 50

Input Format:
The first line contains R and C separated by space.
The next R lines contain C values each separated by a space.

Output Format:
The first R lines contain the largest integer in each row.

Example Input/Output 1:
Input:
3 3
1 2 3
4 6 5
7 8 9

Output:
3
6
9

Example Input/Output 2:
Input:
3 4
12 23 34 45
21 3 55 67
2 45 56 12

Output:
45
67
56
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,n,m,a[50][50],max=0;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{    max=0;
    for(j=0;j<n;j++)
    {
        if(max<a[i][j])
        max=a[i][j];
    }
    printf("%d\n",max);
}
}
