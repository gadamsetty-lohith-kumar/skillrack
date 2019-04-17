/*
Tenth Digit Odd Average

An array of N integers is passed as input. The program must print the average of the integers having their tenth digit as an odd digit. The average is rounded up to two decimal places.

Boundary Condition(s):
1 <= N <= 9999

Input Format:
The first line contains N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the average rounded up to two decimal places.

Example Input/Output 1:
Input:
5
10 2334 65 76 80

Output:
806.67

Example Input/Output 2:
Input:
7
30 15 41 24 48 27 34

Output:
26.33
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k,l=0,n,o;
float m=0,q=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&k);
    l=k;
    for(j=0;j<2;j++)
    {
        o=k%10;
        k=k/10;
    }
    if(o%2==1)
    {
    m=m+l;
    q++;
    }
}
if(q==0)
printf("0.00");
else
printf("%.2f",m/q);
}
