/*
Rearrange Matrix without Duplicates in Each Column

The program must accept an integer matrix of size R*C as input. The program must print YES if the given matrix can be rearranged in such a way that each column must not contain any duplicates. Else the program must print NO as the output.

Boundary Condition(s):
1 <= R, C <= 50
0 <= Matrix Element <= 999999

Input Format:
The first line contains the value of R and C separated by space(s).
The next R lines contain C integers separated by space(s).

Output Format:
The first line contains either "YES" or "NO".

Example Input/Output 1:
Input:
3 3
4 5 5
4 6 7
7 5 7

Output:
YES

Explanation:
The given matrix can be rearranged as
4 4 5
5 5 6
7 7 7
There is no repeated elements in any column.
So, YES is printed as the output.

Example Input/Output 2:
Input:
4 3
4 4 4
5 5 7
7 7 5
4 7 7
Output:
NO

Explanation:
One of the possible arrangements of the matrix is,
4 4 4
5 5 5
7 7 7
4 7 7
Here, 4 is repeated in the first column and 7 is repeated in the second and third columns.
So, NO is printed as the output.
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n,a[2500],b[2500];
scanf("%d%d",&m,&n);
for(i=0;i<m*n;i++)
scanf("%d",&a[i]);
for(i=0;i<m*n;i++)
{  k=0;
    for(j=i+1;j<n*m;j++)
    {
        if(a[i]==a[j]&&a[i]!=-100)
        {
            k++;
            a[j]=-100;
        }
    }
    if(a[i]!=-100)
    if(k+1>n)
    {

        printf("NO");
        return 0;
    }
}
printf("YES");
}
