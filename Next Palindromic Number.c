/*
Next Palindromic Number

An integer N is passed as input. The program must print the immediate next palindromic number of N.

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains N.

Output Format:
The first line contains the immediate next palindromic number of N.

Example Input/Output 1:989989

Input:
119

Output:
121

Example Input/Output 2:
Input:
1111

Output:
1221

  HAVE TO CORRECTLY IN BETTER LOGIC PROBLEM WITH 9 99 999 9999 1 2 3 4 5 6 7 8

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l;
char a[10];
scanf("%s",a);
l=strlen(a);
j=l-1;
for(i=0;i<l/2;i++)
{
    if(a[i]>a[j])
    {
        a[j]=a[i];
    }
    else if(a[i]<a[j])
    {
        a[i]=a[j];
    }
    if(l>2)
    {
    a[i+1]=a[i+1]+1;
    if(l%2==0)
        a[j-1]=a[i+1];
    }
}
for(i=0;i<l;i++)
printf("%c",a[i]);
}

*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,n,m,o,p=1,a[15],q=0;
scanf("%d",&n);
for(i=0;i<100000000;i++)
{   l=0;
    n++;
    k=n;
    o=0;
    p=1;
    while(k>0)
    {
        a[l]=k%10;
        k=k/10;
        l++;
    }
    l--;
    q=l;
    for(j=0;j<=l/2;j++)
    {
        if(a[j]!=a[q])
        {
            p=0;
        break;
        }
        q--;
    }
    if(p==1)
    {
        printf("%d",n);
        break;
    }
}
}
