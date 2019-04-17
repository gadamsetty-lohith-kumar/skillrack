/*
String With Most Vowels

Two Strings S1 and S2 are given as input. The program must print the string with the most number of vowels. If two strings have the same number of vowels, print the string with greater length.

Boundary Condition(s):
1 <= length of strings <= 1000

Input Format:
The first line S1 and S2 separated by space(s).

Output Format:
The first line contains a string.

Example Input/Output 1:
Input:
adder divider

Output:
divider

Example Input/Output 2:
Input:
important welcome

Output:
important
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=0,l,m=0,o;
char a[2001];
scanf("%[^\n]",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]==' ')
    {
    k=1;
    o=i;
    }
    if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u')
    {
        if(k==0)
        j++;
        else
        m++;
    }
}
if(j>m||(j==m&&(o>(l-(o+1)))))
{
    for(i=0;i<o;i++)
    printf("%c",a[i]);
}
else
{
    for(i=o+1;i<l;i++)
    printf("%c",a[i]);
}
}
