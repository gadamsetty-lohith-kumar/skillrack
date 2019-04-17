/*
Interchange Diagonals in Matrix

The program must accept an integer matrix of size N*N as input. The program must interchange the values in the diagonals of the matrix. Finally, the program prints the matrix.

Boundary Condition(s):
1 <= N <= 50

Input Format:
The first line contains the value of N.
The next N lines contain N integers each separated by space(s).

Output Format:
The first N lines contain N integers each separated by a space.

Example Input/Output 1:
Input:
3
5 1 6
4 2 9
8 7 3

Output:
6 1 5
4 2 9
3 7 8

Explanation:
The main diagonal elements are 5 2 3
The opposite diagonal elements are 6 2 8
In the 1st row, interchange 5 and 6
In the 2nd row, 2 is common for both the diagonals. Hence no need to interchange.
In the 3rd row, interchange 8 and 3

Example Input/Output 2:
Input:
4
54 86 35 71
78 32 85 62
69 84 66 45
37 79 73 30

Output:
71 86 35 54
78 85 32 62
69 66 84 45
30 79 73 37
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,n,a[50][50];
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
k=0;
l=n-1;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j)
        printf("%d ",a[i][l]);
        else if(j==l)
        printf("%d ",a[i][i]);
        else
        printf("%d ",a[i][j]);
    }
    l--;
    printf("\n");
}
}
