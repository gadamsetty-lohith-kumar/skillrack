/*
Next Number Same Unit Digit

An array of N integers are given as input. The program must print the integers only if the unit digit of the current integer and the unit digit of the next integer are same.

Boundary Condition(s):
2 <= N <= 1000

Input Format:
The first line contains the value of N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains integers separated by a space.

Example Input/Output 1:
Input:
6
12 834 94 485 285 905

Output:
834 485 285

Example Input/Output 2:
Input:
6
91 41 74 192  32 45

Output:
91 192
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=0,n,a[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    j=a[i]%10;
    k=a[i+1]%10;
    if(j==k)
    printf("%d ",a[i]);
}
}
