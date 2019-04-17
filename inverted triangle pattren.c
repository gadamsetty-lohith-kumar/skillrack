/*Inverted Triangle Pattern

Given an integer N, the program must print the pattern as shown in the Example Input/Output section.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The pattern is printed as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
4

Output:
1*2*3*4
*7*6*5*
**8*9**
***10***

Example Input/Output 2:
Input:
5

Output:
1*2*3*4*5
*9*8*7*6*
**10*11*12**
***14*13***
****15****
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l=0,m=1,n;
scanf("%d",&n);
k=(2*n)-1;
for(i=0;i<n;i++)
{l=0;
    for(j=0;j<(n*2)-1;j++)
    {
        if(j>=i&&j<=k)
        {
           if(l==0)
           {
           printf("%d",m);
           l=1;
           if(i%2==0)
                m++;
               else
                m--;
           }
           else
           {
               printf("*");
               l=0;
           }
        }
        else
        printf("*");

    }
    if(i%2==0)
        m=m+(n-i)-2;
    else
        m=m+(n-i)+1;
    k--;
    printf("\n");
}

}
