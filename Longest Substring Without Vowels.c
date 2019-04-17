/*
Longest Substring Without Vowels

Given a string S as input, the program must print the longest substring without any vowels. If there are no such substring (all characters are vowels) then print -1. If the substrings are of same length print the first substring.

Boundary Condition(s):
2 <= Length of S <= 100

Input Format:
The first line contains the string S without any space.

Output Format:
The first line contains the longest substring without any vowels else -1.

Example Input/Output 1:
Input:
awkxqdtpetsqwjh

Output:
wkxqdtp

Explanation:
The first substring is wkxqdtp with the length 7.
The second substring is tsqwjh with the length 6.
Hence the output is wkxqdtp

Example Input/Output 2:
Input:
aauieeoeuu

Output:
-1

Explanation:
As all the characters are vowels, there is no substring in it.
Hence the output is -1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m,n=0,o,R;
char a[100];
scanf("%s",a);
l=strlen(a);
R=0;
for(i=0;i<l;i++)
{
    if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
    {
        R=1;
        for(j=i+1;j<l;j++)
        {
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
            {
                break;
            }
        }

       k=j-i;
      if(k>n)
      {
        n=k;
        m=i;
        o=j;
        i=j;// to decrease the no of loops to run
      }
    }
}
if(R==0)
{
printf("-1");
}
else
{
for(i=m;i<o;i++)
printf("%c",a[i]);
}
}
