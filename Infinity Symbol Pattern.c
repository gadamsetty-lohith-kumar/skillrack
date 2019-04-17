/*
Infinity Symbol Pattern

Given a matrix M of size N*N as input, the program must print the output as shown in the Example Input/Output section.

Boundary Condition(s):
2 <= N <= 50

Input Format:
The first line contains the value of N.
The next N lines contain N values each separated by space.

Output Format:
The first line contains the desired output as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
3
1 2 3
5 6 7
2 3 4

Output:
1 6 4 7 3 6 2 5 1

Example Input/Output 2:
Input:
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Output:
1 6 11 16 12 8 4 7 10 13 9 5 1
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n,a[50][50];
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
k=n+(3*(n-1));
i=0;
j=0;
for(l=0;l<k;l++)
{
    printf("%d ",a[i][j]);
    if(l<n-1)
    {
        i++;
        j++;
    }
    else if(i!=0&&j==n-1)
    i--;
    else if(i!=n-1&&j!=0)
    {
        i++;
        j--;
    }
    else
    i--;
}
}
