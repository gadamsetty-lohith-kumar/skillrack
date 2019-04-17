/*
Find the Closest Palindrome

The program must accept a number N as the input. The program must print the closest palindromic number as the output. If there are two closest palindromic numbers the program must print the smaller number.

Boundary Condition(s):
2 <= N <= 99999999999999

Input Format:
The first line contains the value of N.

Output Format:
The first line contains the closest palindromic number.

Example Input/Output 1:
Input:
124

Output:
121

Example Input/Output 2:
Input:
1439

Output:
1441

Input:
723891738

Expected Output:
723888327

Input:
12345678876543

Expected Output:
12345677654321
*/


/*
      with intermediate printing
#include<stdio.h>
#include <stdlib.h>

int main()
{
long long int i,j=0,k=0,l=0,o=0,p=0,m=0,n,q=0;
long long int a;
char b[20];
scanf("%lld",&a);
printf("%lld\n",a);
j=a;
k=a;
for(i=0;i<1000000000;i++)
{
    j++;
    k--;
    for(p=0;p<2;p++)
    {
    if(p%2==0)
    q=k;
    else
    q=j;
    o=0;
    sprintf(b,"%lld",q);
    //printf("%s ",b);
   l=strlen(b);
   n=l-1;
   //printf(" %lld %lld \n",l,n);
   for(m=0;m<l/2;m++)
   {
       if(b[m]!=b[n])
       {
           o=1;
           //printf("%lld %lld\n",m,n);
       }
       n=n-1;
   }
   if(o==0)
   {
       printf("%lld %lld",q,i);
       return 0;
   }
    }
}
}
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
long long int i,j=0,k=0,l,o=0,p=0,m,n,q=0;
long long int a;
char b[20];
scanf("%lld",&a);
j=a;
k=a;
for(i=0;i<1000000000;i++)
{
    j++;
    k--;
    for(p=0;p<2;p++)
    {
    if(p%2==0)
    q=k;
    else
    q=j;
    o=0;
    sprintf(b,"%lld",q);    // converts integer to string
   l=strlen(b);
   n=l-1;
   for(m=0;m<l/2;m++)
   {
       if(b[m]!=b[n])
       {
           o++;
           break;
       }
       n--;
   }
   if(o==0)
   {
       printf("%lld",q);
       return 0;
   }
    }
}
}
