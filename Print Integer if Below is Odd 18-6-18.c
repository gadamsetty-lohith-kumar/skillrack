/*
Print Integer if Below is Odd

An integer matrix of size R*C is given as input. The program must print the integer if the integer present below the current integer is odd else the program must print *.

Boundary Condition(s):
2 <= R, C <= 10

Input Format:
The first line contains the value of R and C separated by space(s).
The next R lines contain C integers in each line separated by space(s).

Output:
The first R lines contain the matrix modified matrix.

Example Input/Output 1:
Input:
3 3
2 6 72
4 3 1
1 6 9

Output:
* 6 72
4 * 1
* * *

Example Input/Output 2:
Input:
2 3
3 4 5
6 7 8

Output:
* 4 *
* * *
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,a[100][100],m,n;
scanf("%d %d\n",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d ",&a[i][j]);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i+1][j]%2==1)
        printf("%d ",a[i][j]);
        else
        printf("* ");
    }
    printf("\n");
}
}
        
