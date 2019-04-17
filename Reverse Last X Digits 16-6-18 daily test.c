/*
Reverse Last X Digits

Given two numbers N and X as input, the program must print the value of N with last X digits reversed.

Boundary Condition(s):
1 <= N <= 999999999
0 <= X <= 9

Input Format:
The first line contains the value of N.
The second line contains the value of X.

Output Format:
The first line contains the value of N with last X digits reversed.

Example Input/Output 1:
Input:
12345
2

Output:
12354

Example Input/Output 2:
Input:
123459823
5

Output:
123432895
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,l=0;
char a[15];
scanf("%s %d",a,&j);
l=strlen(a);
for(i=0;i<l-(j);i++)
printf("%c",a[i]);
if(j!=0)
for(i=l-1;i>=l-j;i--)
printf("%c",a[i]);

}
