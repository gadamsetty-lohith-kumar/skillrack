/*
Remove S2 Characters from S1

Two string values S1 and S2 are passed as input to the program. The program must remove all the characters that are present in S2 from S1 and print the resulting string value as the output.

Boundary Condition(s):
1 <= Length of S1 <= 1000
1 <= Length of S2 <= 1000

Input Format:
The first line contains S1.
The second line contains S2.

Output Format:
The first line contains the string value as mentioned above.

Example Input/Output 1:
Input:
apple
pan

Output:
le

Example Input/Output 2:
Input:
economical
mango

Output:
ecicl
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l;
char a[1000],b[1000];
scanf("%s %s",a,b);
k=strlen(a);
l=strlen(b);
for(i=0;i<l;i++)
{
    for(j=0;j<k;j++)
    {
        if(b[i]==a[j])
        a[j]='@';
    }
}
for(i=0;i<k;i++)
if(a[i]!='@')
printf("%c",a[i]);
}
