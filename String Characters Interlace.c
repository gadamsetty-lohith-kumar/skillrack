/*
String Characters Interlace

Given an input string S, accept the input string S and print the string in the interlaced order as shown in the example Input/Output section.

Input Format:
The first line contains the value of String S (may contain letters, white spaces, special characters, and numbers).

Output Format:
The string S has to be printed in the order of 1st character and (N-1) character, 2nd character and (N-2) character and so on where N is the length of the string S.

Boundary Conditions:
1 <= Length of S <= 100

Example Input/Output 1:
Input:
abc321

Output:
a 1 b 2 c 3

Example Input/Output 2:
Input:
pqrs-wxyz

Output:
p z q y r x s w -
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l;
char a[100];
scanf("%[^\n]",a);
l=strlen(a);
j=l;
k=l/2;
for(i=0;i<k;i++)
{
    printf("%c %c ",a[i],a[l-1]);
    l--;
}
if(j%2==1)
printf("%c",a[(j/2)]);
}
