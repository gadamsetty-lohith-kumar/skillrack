/*
2*2 Sub Matrix with Sum

A matrix of size R*C and an integer S are passed as the input to the program. The program must print the 2*2 submatrix whose sum is S.
If more than one such submatrices exist, print the first occurring submatrix (when traversed from top to bottom in the matrix and from
left to right in each row).

Boundary Condition(s):
2 <= R, C <= 100

Input Format:
The first line contains the value of R and C separated by space(s).
The next R lines contain C integers separated by space(s).

Output Format:
The first two lines contain the submatrix.

Example Input/Output 1:
Input:
3 3
23 12 45
25 26 29
33 35 36
119

Output:
25 26
33 35

Example Input/Output 2:
Input:
4 3
48 10 77
4 99 15
75 29 97
40 84 62
272

Output:
29 97
84 62
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n,a[100][100];
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
scanf("%d",&l);
for(i=0;i<m-1;i++)
{
    for(j=0;j<n-1;j++)
    {
        k=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
        if(k==l)
        {
            printf("%d %d\n%d %d",a[i][j],a[i][j+1],a[i+1][j],a[i+1][j+1]);
            return 0;
        }

    }
}

}
