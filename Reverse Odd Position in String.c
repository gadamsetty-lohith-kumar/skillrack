/*
Reverse Odd Position in String

Given a string S, the program must reverse the characters present in odd positions of the string S.

Boundary Condition(s):
1 <= Length of S <= 100

Input Format:
The first line contains S.

Output Format:
The first line contains the string value with the characters in the odd positions of S reversed

Example Input/Output 1:
Input:
barcode

Output:
eaocrdb

Example Input/Output 2:
Input:
Mediterranean

Output:
neeiaerrtndaM
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l;
char a[100],b;
scanf("%s",a);
l=strlen(a);
j=l-1;
if(l%2==0)
j--;
for(i=0;i<l/2;i+=2)
{
    b=a[i];
    a[i]=a[j];
    a[j]=b;
    j=j-2;
}
for(i=0;i<l;i++)
printf("%c",a[i]);
}
