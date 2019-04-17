/*
Previous Number Same Unit Digit

An array of N integers are given as input. The program must print the integers only if the unit digit of the current integer and unit digit of the previous integer are same.

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
94 285 905

Example Input/Output 2:
Input:
6
91 41 74 192  32 45

Output:
41 32
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,a[1000],n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
j=a[0]%10;
for(i=1;i<n;i++)
{
    k=a[i]%10;
    if(k==j)
    printf("%d ",a[i]);
    j=k;
}

}
