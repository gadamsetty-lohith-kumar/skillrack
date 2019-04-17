/*
Adjacent Odd Digits

An integer N is given as input. The program must print the digits surrounded by odd digits on both sides. The first and last digits do not have an adjacent digit so consider it to be an odd digit.

Boundary Condition(s):
1 <= N <= 999999999999999

Input Format:
The first line contains the value N.

Output Format:
The first line contains the digits having odd adjacent digits.

Example Input/Output 1:
Input:
2353176

Output:
25316

Example Input/Output 2:
Input:
386369725

Output:
62
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
long long int i=0,j,k,a[150],l=-1;
scanf("%lld",&j);
while(j>0)
{
    a[i]=j%10;
    j=j/10;
    i++;
}

a[i]=3;
a[l]=a[i];
for(k=i-1;k>=-1;k--)
{
   if(a[k+1]%2==1&&a[k-1]%2==1)
   printf("%lld",a[k]);

}
}
