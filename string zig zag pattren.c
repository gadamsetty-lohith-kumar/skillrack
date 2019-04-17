/*
Given a string S and an integer N as the input, the program must split the string into groups whose size is N and print them as the
output in separate lines in a zig zag manner. If the last group size is less than N then the remaining letters must be filled with
asterisk as shown in the Example Input/Output.

Input Format:
The first line contains S.
The second line contains N.

Output Format:
LENGTH(S)/N + LENGTH(S)%N lines containing the desired pattern.

Boundary Conditions:
4 <= LENGTH(S) <= 500
2 <= N <= LENGTH(S)

Example Input/Output 1:
Input:
ENVIRONMENT
3

Output:
ENV
ORI
NME
*TN

Example Input/Output 2:
Input:
ENVIRONMENT
4

Output:
ENVI
MNOR
ENT*

Example Input/Output 3:
Input:
EVERYDAY
2

Output:
EV
RE
YD
YA
*/



#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k,l=0,m=0,n=1,o=0;
char a[500];
scanf("%s%d",&a,&k);
j=strlen(a);
o=j/k;
printf("%d ",o);
if(j%k!=0)
o++;
o=o*k;
printf("%d\n",o);
for(i=0;i<o;i++)
{
    if(m%2==0)
    {
    l=i;

    }
   else if(n==0)
   {
    l=l+k;
    n=1;
    n=1;
    }
   else
   {
    l--;
   }
   if(l>=j)
   printf("*");
   else
    printf("%c",a[l]);
    if((i+1)%k==0&&i!=0)
    {
    printf("\n");
    m++;
    n=0;
     }

}
}

  //first one old code not efficient

/*
#include<stdio.h>
#include<string.h>
main()
{
int i,j,k,l,m,n,o;
char a[100];
scanf("%s",&a);
scanf("%d",&n);
o=n;
l=strlen(a);
printf(" l is %d",l);
printf("\n");
if(l%n==0)
{
    m=l/n;
}
else
{
m=l/n+1;
}
k=0;
j=0;
for(i=0;i<m;i++)
{
if(k==0)
{
  while(j<n)
  {
      if(j<l)
      {
         printf("%c",a[j]);
      }
      else
      {
           printf("*");

      }
      j++;
  }

  j=(j+o)-1;
  k=1;
  printf("\n");
  }
  else{
  if(k==1)
  {
  while(j>=n)
  {
      if(j>=l)
      {
          printf("*");
      }

      else
        {

  printf("%c",a[j]);
        }
  j--;
  }
  j=(j+o)+1;
  k=0;
  n=n+(o*2);
  printf("\n");
  }
}
}
}
*/
