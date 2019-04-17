/*
Matrix Sort Corner Elements Clock-wise

An integer matrix of size R*C is passed as input. The program must sort the elements at the corner position of the matrix in clock-wise direction and print the matrix.

Boundary Condition(s):
1 <= R, C <= 1000

Input Format:
The first line contains the value of R and C separated by space(s).
The next R lines contain C elements each separated by space(s).

Output Format:
The first R lines contain C elements each separated by a space with corner elements sorted in clock-wise direction.

Example Input/Output 1:
Input:
3 3
9 2 7
4 5 6
3 8 1

Output:
1 2 3
4 5 6
9 8 7

Example Input/Output 2:
Input:
4 3
924 450 994
58 146 589
526 548 407
471 145 779

Output:
471 450 779
58 146 589
526 548 407
994 145 924
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,a[1000][1000],b[4],m,n;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
b[0]=a[0][0];
b[1]=a[0][n-1];
b[2]=a[m-1][0];
b[3]=a[m-1][n-1];
for(i=0;i<4;i++)
for(j=i+1;j<4;j++)
{
    if(b[i]>b[j])
    {
        k=b[i];
        b[i]=b[j];
        b[j]=k;
    }
}
a[0][0]=b[0];
a[0][n-1]=b[1];
a[m-1][0]=b[3];
a[m-1][n-1]=b[2];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
}

