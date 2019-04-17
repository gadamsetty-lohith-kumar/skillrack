/*
Mirror Pattern Matrix

An integer N is passed as input. The program must print the pattern as given in the Example Input/Output section.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The first N lines contain the specified output.

Example Input/Output 1:
Input:
3

Output:
1 2 3 2 1
4 5 6 5 4
7 8 9 8 7

Example Input/Output 2:
Input:
4

Output:
1 2 3 4 3 2 1
5 6 7 8 7 6 5
9 10 11 12 11 10 9
13 14 15 16 15 14 13
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k=1,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=1;j<(n*2);j++)
    {
        printf("%d ",k);
        if(j>=n)
        k--;
        else
        k++;
    }
    k=((i+1)*n)+1;
    printf("\n");
}
}
