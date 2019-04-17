/*
Rotate K Times

The program must accept N integers and K (number of rotation(s)) as input. The program must print N integers after K rotation(s) in clockwise direction as output.

Boundary Condition(s):
1 <= N <= 999
1 <= K <= 9999999999

Input Format:
The first line contains the integer value of N.
The second line contains N integers separated by space(s).
The third line contains the integer value of K.

Output Format:
The first line contains N integers separated by space(s).

Example Input/Output 1:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3

Explanation:
After the first rotation, the given array elements are 5 1 2 3 4.
After the second rotation, the given array elements are 4 5 1 2 3.
So, 4 5 1 2 3 is printed.

Example Input/Output 2:
Input:
9
12 23 34 45 6 67 78 89 90
15

Output:
45 6 67 78 89 90 12 23 34
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
long long int i,j,k,a[1000];
int m,n,l;
scanf("%d",&n);
printf("%d",n);
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
}
scanf("%d",&m);
l=m%n;
l=n-l;
for(i=l;i<n;i++)
printf("%lld ",a[i]);
for(i=0;i<l;i++)
printf("%lld ",a[i]);
}
