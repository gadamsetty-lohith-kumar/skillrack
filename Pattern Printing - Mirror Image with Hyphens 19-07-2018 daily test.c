/*
Pattern Printing - Mirror Image with Hyphens

Accept a number N as the input. The program must print the mirror image pattern as the shown in the Example Input/Output section.

Boundary Condition(s):
3 <= N <= 30

Input Format:
The first line contains the value of N.

Output Format:
The first N lines contain the mirror image pattern.

Example Input/Output 1:
Input:
5

Output:
55555-55555
4444---4444
333-----333
22-------22
1---------1

Example Input/output 2:
Input:
4

Output:
4444-4444
333---333
22-----22
1-------1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n,o;
scanf("%d",&n);
m=n+1;
o=n+1;
for(i=n;i>0;i--)
{
    for(j=1;j<=(n*2)+1;j++)
    {
        if(j>=m&&j<=o)
        printf("-");
        else
        printf("%d",i);
    }
    o++;
    m--;
    printf("\n");
}

}
