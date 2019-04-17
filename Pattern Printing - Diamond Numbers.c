/*
Pattern Printing - Diamond Numbers

Given an integer N as the input, print the pattern as given in the Example Input/Output section.

Input Format:
The first line contains N.

Output Format:
2N-1 lines containing the desired pattern.

Boundary Conditions:
2 <= N <= 50

Example Input/Output 1:
Input:
3

Output:
0 0 1 0 0
0 2 0 8 0
3 0 0 0 7
0 4 0 6 0
0 0 5 0 0

Example Input/Output 2:
Input:
5

Output:
0 0 0 0 1 0 0 0 0
0 0 0 2 0 16 0 0 0
0 0 3 0 0 0 15 0 0
0 4 0 0 0 0 0 14 0
5 0 0 0 0 0 0 0 13
0 6 0 0 0 0 0 12 0
0 0 7 0 0 0 11 0 0
0 0 0 8 0 10 0 0 0
0 0 0 0 9 0 0 0 0

*/
#include<stdio.h>
void printPattern(int N)
{
int i,j,k=N,l=N,m=1,n=(((N*2)-2)*2);
n++;
for(i=1;i<=(2*N)-1;i++)
{
    for(j=1;j<=(2*N)-1;j++)
    {
        if(j==k)
        printf("%d ",m);
        else if(j==l)
        printf("%d ",n);
        else
        printf("0 ");
    }
    printf("\n");
    if(i<N)
    {
       k--;
       l++;
    }
    else
    {
        k++;
        l--;
    }
    n--;
    m++;
}

}
int main()
{
    int N;
    scanf("%d",&N);
    printPattern(N);
    return 0;
}
