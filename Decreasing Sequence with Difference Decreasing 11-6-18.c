/*
Decreasing Sequence with Difference Decreasing

Two integers N and D are passed as input. The program must print the decreasing sequence from N with common difference D. The difference D is decremented by 1 when calculating the values every time. The sequence is printed until D becomes zero.

Boundary Condition(s):
2 <= N <= 9999999
1 <= D <= 9999999

Input Format:
The first line contains N and D separated by space(s).

Output Format:
The first line contains integers separated by a space.

Example Input/Output 1:
Input:
20 5

Output:
15 11 8 6 5

Example Input/Output 2:
Input:
12 6

Output:
6 1 -3 -6 -8 -9
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,n=0;
scanf("%d%d",&j,&k);
n=k;
for(i=0;i<n;i++)
{
    j=j-k;
    printf("%d ",j);
    k--;
}
}
