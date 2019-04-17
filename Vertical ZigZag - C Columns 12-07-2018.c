/*
Vertical ZigZag - C Columns

Accept two integers as the input. The program must print the vertical zigzag pattern as given in the Example Input/Output Section.

Boundary Condition(s):
2 <= R, C <= 50

Input Format:
The first line contains the value of R and C separated by space(s).

Output Format:
The first R lines contain the vertical zigzag pattern.

Example Input/Output 1:
Input:
5 5

Output:
1 10 11 20 21
2 9  12 19 22
3 8  13 18 23
4 7  14 17 24
5 6  15 16 25

Example Input/Output 2:
Input:
2 3

Output:
1 4 5
2 3 6
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,n,m;
scanf("%d%d",&m,&n);
for(i=1;i<=m;i++)
{
    k=i;
    for(j=1;j<=n;j++)
    {
        printf("%d ",k);
        if(j%2==1)
        k=k+((m-i)*2)+1;
        else
        k=k+(i-1)*2+1;
    }
    printf("\n");
}

}
