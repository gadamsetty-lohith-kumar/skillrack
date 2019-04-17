/*
Last Repeating Integer

N integers are passed as the input. The program must print the last repeating integer among the N integers.

Boundary Condition(s):
1 <= N, value of integers <= 1000

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the last repeating integer.

Example Input/Output 1:
Input:
6
1 2 1 5 2 7

Output:
2

Example Input/Output 2:
Input:
7
12 34 34 34 12 45 67

Output:
12
*/


#include<stdio.h>

#include <stdlib.h>

int main()
{
int i,j,k=0,n,a[1000],m=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=n-1;j>=0;j--)
{
    for(i=j-1;i>=0;i--)
    {
        if(a[i]==a[j]&&i!=j)
        {
        k=a[i];
        m=1;
        break;
        }
    }
    if(m==1)
    break;
}
printf("%d",k);
}

