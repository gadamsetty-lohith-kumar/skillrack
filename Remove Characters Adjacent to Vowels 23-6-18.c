/*
Remove Characters Adjacent to Vowels

Accept a string as input. The program must print the string by removing the characters if there is at least one vowel adjacent to it.

Boundary Condition(s):
1 <= Length of String <= 1000

Input Format:
The first line contains the string.

Output Format:
The first line contains the string with the characters adjacent to vowels removed from it.

Example Input/Output 1:
Input:
thinker

Output:
tie

Example Input/Output 2:
Input:
table

Output:
ae
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k,l=0;
char a[1000];
scanf("%s ",a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i+1]!='a'&&a[i+1]!='e'&&a[i+1]!='i'&&a[i+1]!='o'&&a[i+1]!='u'&&a[i-1]!='a'&&a[i-1]!='e'&&a[i-1]!='i'&&a[i-1]!='o'&&a[i-1]!='u'&&a[i-1]!='A'&&a[i-1]!='E'&&a[i-1]!='I'&&a[i-1]!='O'&&a[i-1]!='U'&&a[i+1]!='A'&&a[i+1]!='E'&&a[i+1]!='I'&&a[i+1]!='O'&&a[i+1]!='U')
     printf("%c",a[i]);

}
}
