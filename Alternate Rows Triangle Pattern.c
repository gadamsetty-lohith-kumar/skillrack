/*
Alternate Rows Triangle Pattern

Given an integer N, the program must print the pattern as shown in the Example Input/Output section

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The pattern is printed as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
4

Output:
---1
--3-2
-4-5-6
10-9-8-7

Example Input/Output 2:
Input:
5

Output:
----1
---3-2
--4-5-6
-10-9-8-7
11-12-13-14-15
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,l,m,n;
scanf("%d",&n);
l=n-1;
for(i=1;i<=n;i++)
{
    m=0;
    for(j=0;j<n+(i-1);j++)
    {
        if(j>=l&&m==0)
        {
            if(i%2==1)
            k++;
            else
            k--;
            printf("%d",k);
            m=1;
        }
        else
        {
            printf("-");
            m=0;
        }
    }
    printf("\n");
    l--;
    if(i%2==1)
    k=k+(i+2);
    else
    k=k+(i-1);
}
}
