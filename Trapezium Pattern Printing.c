/*
Trapezium Pattern Printing

Given an integer N as the input,print the pattern as given in the Example Input/Output section

Input Format:
The first line contain N.

Boundary Conditions:
2<=N<=100

Example Input/Output1:
Input:
4

Output:
1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11

Example Input/Output2:
Input:
7

Output:
1*2*3*4*5*6*7*50*51*52*53*54*55*56
--8*9*10*11*12*13*44*45*46*47*48*49
----14*15*16*17*18*39*40*41*42*43
------19*20*21*22*35*36*37*38
--------23*24*25*32*33*34
----------26*27*30*31
------------28*29
*/

#include<stdio.h>
main()
{
int i,j,k,l=0,m=1,n,o=0,p=0,q=0;
scanf("%d",&n);
k=(n*4)-1; //for no of columns
p=(n*(n+1)); // sum of n numbers multiply with two 2*(n*(n+1)/2)
for(i=0;i<n;i++)
{
    q=0;
for(j=0;j<k;j++)
{
   if(j>=l)
   {
      if(j%2==0)
      {
        if(j<(n*2)-1)
        {
        printf("%d",m);
        m++;
        }
        else if(j>(n*2)-1)
        {
        if(q==0)
        {
        o=p-(m-2);//to find next element after printing first half
        q=1;
        }
        printf("%d",o);
        o++;
        }
       }
        else
        {
        printf("*");
        }
      }
   else
   printf("-");

}
l=l+2;// to print "-"
k=k-2; //decrease the columns
printf("\n");
}
}
