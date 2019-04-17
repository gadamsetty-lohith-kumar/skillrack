/*
Hundredth Digit Odd

Three numbers are passed as input. The program must print the number having an odd digit in its hundredth place.

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains N.

Output Format:
The first line contains an integer.

Example Input/Output 1:
Input:
12345 400 3478

Output:
12345

Example Input/Output 2:
Input:
3439 849 567

Output:
567
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int a[3],l,m,n,i,j,k;
for(i=0;i<3;i++)
scanf("%d",&a[i]);
for(m=0;m<3;m++)
{k=a[m];
    for(n=0;n<3;n++)
    {
       j=a[m]%10;
       a[m]=a[m]/10;
    }
    if(j%2==1)
    break;
}
printf("%d",k);
}
