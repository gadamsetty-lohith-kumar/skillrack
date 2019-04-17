/*
Longest Continuous Alphabets Sequence

Given a string S as input, the program must print the longest continuous alphabets sequence in the string.

Boundary Condition(s):
1 <= Length of S <= 1000

Input Format:
The first line contains the string S.

Output Format:
The first line contains the longest continuous alphabets sequence in the string.

Example Input/Output 1:
Input:
abchyzabs

Output:
yzab

Example Input/Output 2:
Input:
cdefghijklmnopqrst

Output:
cdefghijklmnopqrst
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=1,l=0,max=0,m=0,n=0;
char a[1000];
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{

        if(a[i]+1==a[i+1]||(a[i]=='z'&&a[i+1]=='a'))
        { if(k==1){
            m=i;
              }
            k++;
        }
        else if(k>max)
        {
            max=k;
            n=m;
            j=i;
            k=1;
        }
}
for(i=n;i<=j;i++)
printf("%c ",a[i]);
}
