/*
Replace Continuously Repeated Characters

A string S is passed as input. The program must replace all the continuously repeating characters in the string with just one occurrence of that specific character which is repeating.

Boundary Condition(s):
1 <= Length of string <= 1000

Input Format:
The first line contains the string S.

Output Format:
The first line contains the modified string.

Example Input/Output 1:
Input:
hello

Output:
helo

Example Input/Output 2:
Input:
aabbaaabbcccc

Output:
ababc
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,n;
char a[1000],b;
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
if(a[i]!=a[i+1])
printf("%c",a[i]);
}
