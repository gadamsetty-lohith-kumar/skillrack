/*
Divisible By Both 2 and 3

An array of N integers is given as input. The program must print the integers which are divisible by both 2 and 3.

Boundary Condition(s):
1 <= N <= 10000

Input Format:
The first line contains the value of N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the integers divisible by both 2 and 3 separated by a space.

Example Input/Output 1:
Input:
5
8 6 12 9 24

Output:
6 12 24

Example Input/Output 2:
Input:
7
22 24 67 60 93 96 102

Output:
24 60 96 102
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,a[10000],n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    if(a[i]%2==0&&a[i]%3==0)
    printf("%d ",a[i]);
}

}
