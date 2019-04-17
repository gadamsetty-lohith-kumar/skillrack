/*
Check Step Sequence

An array of N integers is passed as input. The program must print yes if the array is a step sequence. Else the program must print no. A sequence is said to be step sequence if the adjacent elements in the sequence differ by exactly one for all the elements.

Boundary Condition(s):
1 <= N <= 9999

Input Format:
The first line contains N.
The second line contains N Integers separated by space(s).

Output Format:
The first line contains "yes" or "no".

Example Input/Output 1:
Input:
5
2 3 4 3 2

Output:
yes

Example Input/Output 2:
Input:
6
5 6 7 9 8 7

Output:
no
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j=0,n,a[10000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
    if(a[i]-a[i-1]!=1&&a[i]-a[i-1]!=-1)
    {
      j=1;
    break;
    }
}
if(j==0)
printf("yes");
else
printf("no");
}
