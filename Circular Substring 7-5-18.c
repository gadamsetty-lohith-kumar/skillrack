/*
Circular Substring

A string S is given as input. The program must print the substring of S, given the starting and ending position of the substring. In case the end position is less than the starting position, the substring is printed in a circular fashion.

Boundary Condition(s):
2 <= Length of String <= 1000

Input Format:
The first line contains S, start position and end position separated by space(s).

Output Format:
The first line contains the substring.

Example Input/Output 1:
Input:
important 2 4

Output:
por

Example Input/Output 2:
Input:
think 3 1

Output:
nkth
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k,l,m;
char a[1000];
scanf("%s %d %d",a,&j,&k);
l=strlen(a);
if(j<=k)
for(i=j;i<=k;i++)
printf("%c",a[i]);
else
{
for(i=j;i<l;i++)
printf("%c",a[i]);
for(i=0;i<=k;i++)
printf("%c",a[i]);
}
}
