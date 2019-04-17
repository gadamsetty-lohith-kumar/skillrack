/*
Consecutive Increasing Pairs

An array of N integers is passed as input. The program must print the count of consecutive increasing pairs in the array. Two integers given in the order as A and B are said to be consecutive increasing pair if B = A + 1.

Boundary Condition(s):
2 <= N <= 100000

Input Format:
The first line contains N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the count of consecutive increasing pairs.

Example Input/Output 1:
Input:
5
23 45 46 78 79 100

Output:
2

Example Input/Output 2:
Input:
6
34 67 68 69 70 12

Output:
3
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k=0,n,a[1000000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
if(a[i]-a[i+1]==-1)
k++;
printf("%d",k);
}
