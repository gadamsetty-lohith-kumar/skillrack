/*
Check Column Palindrome Matrix

A matrix of size N*N is passed as input. The program must print yes if there is at least one column in the matrix is a palindrome. Else the program must print no.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.
The next N lines contain N elements each separated by space(s).

Output Format:
The first line contains "yes" or "no".

Example Input/Output 1:
Input:
3
45 23 67
98 13 67
67 25 84

Output:
no

Example Input/Output 2:
Input:
4
34 56 14 93
76 93 76 20
86 93 16 30
34 56 14 93

Output:
yes
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k,l=0,m,n,a[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(j=0;j<n;j++)
{k=0;
m=n-1;
    for(i=0;i<n/2;i++)
    {
        if(a[i][j]==a[m][j])
        k++;
        m--;
    }
    if(k==n/2)
    {
        l=1;
     break;
    }
}
if(l==1)
printf("yes");
else
printf("no");
}
