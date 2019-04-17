/*
Nth Repeating Character - String

A string S is passed as the input to the program. The program must print the Nth repeating character C in the string S. The repeating characters are considered in their order of occurrence from the beginning of the string S. If no such Nth repeating character is present the program must print -1 as the output.

Input Format:
The first line contains the value of S.

Output Format:
The first line contains the value of C.

Boundary Conditions:
2 <= Length of S <= 1000

Example Input/Output 1:
Input:
abcdaeaedbapple
3

Output:
d

Explanation:
a is the first repeating character.
b is the second repeating character.
c is not repeating and hence not considered.
d is the third repeating character and as here N=3, d is printed as the output.

Example Input/Output 2:
Input:
desktoppublishing
3

Output:
i
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,l=0,n,o=0;
char a[1000];
scanf("%s\n%d",a,&n);
l=strlen(a);
for(i=0;i<l;i++)
{o=0;
    for(j=0;j<l;j++)
    {
        if(i!=j&&a[i]==a[j]&&a[i]!='@')
        {
            o++;
            a[j]='@';
        }
    }
    if(o!=0)
    k++;
    if(k==n)
    break;
}
if(k!=0)
printf("\n%c",a[i]);
else
printf("-1");
}
