/*
Longest Series Surrounded by M

An array of N integers and an integer M are passed as input. The program must print the longest series of integers surrounded by M on its both ends. The series must not contain the integer M. If more than one longest such series are found print the last occurring series.

Boundary Condition(s):
3 <= N <= 1000
1 <= M <= 999999999

Input Format:
The first line contains N and M separated by space(s).
The second line contains N integers separated by space(s).

Output Format:
The first line contains the longest series of integers separated by a space.

Example Input/Output 1:
Input:
7 2
45 2 21 534 2 45 2

Output:
21 534

Example Input/Output 2:
Input:
10 23
23 76 23 129 34 12 23 45 67 23

Output:
129 34 12
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
long long int i,j,k=0,l=0,m,n,a[100000],max=0,p=0,q=0;
scanf("%lld %lld",&n,&m);
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
if(a[i]==m)
{
    if(k!=0)
    k=j;
    k++;
    j=i;
    l=j-k;
}
if(max<l&&k!=0)
{
max=l;
p=k;
q=j;
}
}
for(i=p;i<q;i++)
printf("%lld ",a[i]);
}
