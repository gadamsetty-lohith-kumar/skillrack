/*
Equidistant Characters from Start & End

Given a string value S1 the program must print only the characters which are present in the same position from the start of S1 as well as the end of S1 in the order of their occurrence.

Boundary Condition(s):
1 <= Length of S1 <= 1000

Input Format:
The first line contains S1.

Output Format:
The first line contains the string value containing the characters which are present in the same position from the start of S1 as well as the end of S1.

Example Input/Output 1:
Input:
engine

Output:
en

Example Input/Output 2:
Input:
malayalam

Output:
malay
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l;
char a[1000];
scanf("%s",a);
l=strlen(a);
k=l-1;
for(i=0;i<l/2;i++)
{
    if(a[i]==a[k])
    printf("%c",a[i]);
    k--;
}
if(l%2==1)
printf("%c",a[l/2]);
}
