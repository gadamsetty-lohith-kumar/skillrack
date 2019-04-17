/*
Unique Characters Two Strings

Two strings S1 and S2 are passed as input. The program must print the number of unique characters used in both the strings.

Boundary Condition(s):
1 <= Length of strings <= 1000

Input Format:
The first line contains S1 and S2 separated by space(s).

Output Format:
The first line contains the number of unique characters.

Example Input/Output 1:
Input:
owl pow

Output:
4

Example Input/Output 2:
Input:
now won

Output:
3
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k=0,l,m,n,b[26];
char a[2000];
scanf("%[^\n]",a);
l=strlen(a);
for(i=0;i<l;i++)
{
    j=a[i];
    j=j-97;
    b[j]=1;
}
for(i=0;i<26;i++)
if(b[i]==1)
k++;
printf("%d",k);
}
