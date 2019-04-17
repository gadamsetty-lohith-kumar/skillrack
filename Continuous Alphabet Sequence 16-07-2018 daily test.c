/*
Continuous Alphabet Sequence(s)

Given a string S as the input, the program must print the continuous alphabet sequences in the string S. Else the program must print -1 if there is no continuous alphabet sequence in the string.

Boundary Condition(s):
2 <= Length of S <= 100

Input Format:
The first line contains the string S.

Output Format:
The first line contains the continuous alphabet sequence(s) in the string or -1.

Example Input/Output 1:
Input:
habcuedyzab

Output:
abcyzab

Explanation:
The continuous alphabet sequences in the string are abc yzab
Hence the output is abcyzab

Example Input/Output 2:
Input:
wmhhfygogd

Output:
-1

Explanation:
There is no continuous alphabet sequence in the string.
Hence the output is -1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=0,l,m,n;
char a[100];
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]+1==a[i+1])
    {
        if(j==0)
        {
            printf("%c",a[i]);
            j=1;
            k++;
        }
        printf("%c",a[i+1]);
        k++;
    }
    else
    j=0;

}
if(k==0)
printf("-1");
}
