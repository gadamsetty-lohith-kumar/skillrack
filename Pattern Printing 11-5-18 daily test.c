/*
Pattern Printing

Given an integer N as input, the program must print the pattern as shown in the Example Input/Output section.

Boundary Condition(s):
1 <= N <= 50

Input Format:
The first line contains value of integer N.

Output Format:
The first N lines contain the pattern as shown in following examples.

Example Input/Output 1:
Input:
3

Output:
3 3 3
+ 2 2
+ + 1

Example Input/Output 2:
Input:
8

Output:
8 8 8 8 8 8 8 8
+ 7 7 7 7 7 7 7
+ + 6 6 6 6 6 6
+ + + 5 5 5 5 5
+ + + + 4 4 4 4
+ + + + + 3 3 3
+ + + + + + 2 2
+ + + + + + + 1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,n,m=0;
scanf("%d",&n);
m=n;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
     if(j>=k)
    printf("%d ",m);
    else
    printf("+ ");
    }
    printf("\n");
    m--;
    k++;
}

}
