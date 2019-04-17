/*
Character Between Two Vowels

Given a string S, Print only the characters which are surrounded by vowels on both sides, if no character matches the condition print -1.

Input Format:
The first line contains the value of string S.

Output Format:
The first line contains the characters which are surrounded by vowels on both sides if not print -1.

Boundary Condition:
3 <= length of the S <= 100

Example Input/Output 1:
Input:
acceleration

Output:
lrt

Example Input/Output 2:
Input:
knowledge

Output:
-1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,l;
char a[100];
scanf("%s",&a);
l=strlen(a);
for(i=1;i<l-1;i++)
{
    if((a[i-1]=='a'||a[i-1]=='e'||a[i-1]=='i'||a[i-1]=='o'||a[i-1]=='u')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'))
    {
        printf("%c",a[i]);
        k++;
    }
}
if(k==0)
printf("-1");
}
