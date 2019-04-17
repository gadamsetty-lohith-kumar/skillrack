/*
Inverted V Pattern

The program must accept the values of string S1 and S2 as input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
2 <= Length of S1, S2 <= 100

Input Format:
The first line contains the value of string S1.
The second line contains the value of string S2.

Output Format:
The list of lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
orange
energy

Output:
-----e
----g-n
---n---e
--a-----r
-r-------g
o---------y

Example Input/Output 2:
Input:
apple
orange

Output:
-1

Example Input/Output 3:
Input:
neuro
lemon

Output:
----n
---o-e
--m---u
-e-----r
l-------o
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m=0,n;
char a[100],b[100];
scanf("%s%s",&a,&b);
k=strlen(a);
l=strlen(b);
if(a[0]!=b[l-1]&&b[0]!=[a[k-1]])
printf("-1");
else
{ n=k-1;
  if(a[0]==b[l-1])
  {
      n=0;
      m=l-1;
  }
    for(i=k-1;i>=0;i--)
    {
        for(j=0;j<k;j++)
        {
            if(j==i)
            {
                if(a[0]==b[l-1])
            printf("%c",b[m]);
            else
            printf("%c",a[n]);
            }
            else if(j==k-1)
            {
                if(a[0]==b[l-1])
            printf("%c",a[n]);
            else
            printf("%c",b[m]);
            }
            else
            printf("-");
        }
        k++;
        if(a[0]==b[l-1])
        {
            m--;
            n++;
        }
        else
        {
        m++;
        n--;
        }
        printf("\n");
    }
}

}
