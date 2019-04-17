/*
Sort One or Two Digit Numbers

N numbers are passed as input. The program must sort only the numbers with one or two digits in it among the N numbers. Other numbers are retained in their same positions.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains N.
The second line contains N numbers separated by space(s).

Output Format:
The first line contains N numbers separated by a space.

Example Input/Output 1:
Input:
6
12 109 3 751 89 56

Output:
3 109 12 751 56 89

Example Input/Output 2:
Input:
9
534 95 805 605 315 42 762 523 23

Output:
534 23 805 605 315 42 762 523 95
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,a[1000],n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]<100&&a[j]<100&&a[i]>a[j])
        {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
