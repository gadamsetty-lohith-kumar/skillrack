/*
Power of 2 or -2

Given an integer N, the program must determine if it is a power of 2 or -2. If N is a power of 2 or -2, the program must print yes. Else the program must print no.

Boundary Condition(s):
-10^17 <= N <= 10^17

Input Format:
The first line contains the value of N.

Output Format:
The first line contains either yes or no

Example Input/Output 1:
Input:
32

Output:
yes


Example Input/Output 2:
Input:
90

Output:
no
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,l=0,m=0;
double n,o;
scanf("%lf",&n);
o=n;
if(o<0)
m=1;
if(n<0)
n=-n;
for(i=n;n>0;i--)
{
    if((unsigned long)n&1)
    {
        l++;
        break;
    }
    n=n/2;
    if(n==2)
    break;
    k++;
   // printf("%d \n",n);
}
if((l==0&&m!=1&&n!=0)||((m==1&&k%2==1)||n==1))
printf("yes");
else
printf("no");
}


