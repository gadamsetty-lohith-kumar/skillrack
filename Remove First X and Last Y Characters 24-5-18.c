/*
Remove First X and Last Y Characters

A string S and two integers X and Y are given as input. The program must print the string after removing the first X characters and last Y characters.

Boundary Condition(s):
2 <= Length of String <= 1000

Input Format:
The first line contains the string S, X and Y separated by space(s).

Output Format:
The first line contains the string after removal of characters.

Example Input/Output 1:
Input:
marshmallow 2 3

Output:
rshmal

Example Input/Output 2:
Input:
geography 3 1

Output:
graph
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,l,m,n;
char a[1000];
scanf("%s",a);
l=strlen(a);
scanf("%d%d",&m,&n);
for(i=m;i<l-n;i++)
printf("%c",a[i]);

}
