/*
Reversed Alphabet Position

Given a string S, for each letter in the string the program must print the reversed alphabet position letter.

Boundary Condition(s):
1 <= Length of String <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the specified output.

Example Input/Output 1:
Input:
abc

Output:
zyx

Example Input/Output 2:
Input:
Yarn

Output:
Bzim
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,n;
char a[1000],c='Z';
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]>='A'&&a[i]<='Z')
    {
        j=a[i];
        j=90-j;
        j=j+65;
    }
    else
    {
    j=a[i];
    j=122-j;
    j=j+97;
    }
    printf("%c",j);
}
}
