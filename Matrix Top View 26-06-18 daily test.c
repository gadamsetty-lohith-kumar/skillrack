/*
Matrix Top View

A character matrix of size R*C is passed as input. The program must print the first alphabet in each column.
Note: At least one alphabet will be present in a column.

Boundary Condition(s):
1 <= R <= 100
1 <= C <= 100

Input Format:
The first line contains the value of R and C.
Next lines contain the values in the R*C matrix with each value separated by one space.

Output Format:
The first line contains the top view of the matrix.

Example Input/Output 1:
Input:
3 6
m - - t - r
a - s a e d
i a n d - a

Output:
master

Example Input/Output 2:

Input:
4 9
s - - l - r - - k
- k - - l - a - -
- - i - - - - - -
- - - - - - - c -

Output:
skillrack
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n;
char a[100][100];
scanf("%d %d\n",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%c ",&a[i][j]);
}
}

for(j=0;j<n;j++)
{
    for(i=0;i<m;i++)
    {
        if(a[i][j]!='-')
        {
            printf("%c",a[i][j]);
            break;
        }
    }

}

}
