/*
Print Digit Square

Given an integer N as input. The program must print the square of each of the digit in N. If the digit is odd then the square value is printed as negative value.

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains N.

Output Format:
The first line contains all the square value of the digits of N as per the condition.

Example Input/Output 1:

Input:
1234

Output:
-14-916

Example Input/Output 2:

Input:
246

Output:
41636
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=0,n;
char a[15];
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
    if(a[i]!='-')
    {
    j=a[i]-48;
    k=j*j;
    if(j%2==1)
    k=-k;
    printf("%d",k);
    }
}

}
