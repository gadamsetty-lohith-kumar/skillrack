/*
Count of Uppercase Letters

A string is passed as input. The program must print the count of uppercase letters.

Boundary Condition(s):
1 <= length of string <= 1000

Input Format:
The first line contains the string.

Output Format:

The first line contains the count of uppercase letters.

Example Input/Output 1:
Input:
aPpLe

Output:
2

Example Input/Output 2:
Input:
MoNGoDB

Output:
5
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,l;
char a[1000];
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]>='A'&&a[i]<='Z')
    j++;
}
printf("%d",j);
}
