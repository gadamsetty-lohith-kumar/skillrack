/*
Repeating Character Toggle Last

The program must accept a string S which contains only lower case alphabets and then search for successively repeating characters in S. Then the program must toggle the case (convert it to Upper Case) of the last repeating character and print the resulting string value as the output.

Boundary Condition(s):
1 <= Length of S <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the output string value.

Example Input/Output 1:
Input:
aaa

Output:
aaA

Example Input/Output 2:
Input:
aahhjhszz

Output:
aAhHjhszZ
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,l=0;
char a[1000];
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i-1]==a[i]&&a[i]!=a[i+1])
printf("%c",toupper(a[i]));
else
printf("%c",a[i]);
}
}
