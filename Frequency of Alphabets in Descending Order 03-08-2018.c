/*
Frequency of Alphabets in Descending Order

The program must accept a string S with lower case alphabets and print the alphabets in the descending order of frequency of their occurrence. If more than one alphabets are repeated for the same number of times, then the program must print them in alphabetical order.

Boundary Condition(s):
1 <= Length of String S <= 150

Input Format:
The first line contains the string S.

Output Format:
The first line contains the alphabets sorted based on their frequency.

Example Input/Output 1:
Input:
apple

Output:
pael

Explanation:
In apple, the frequency of occurrence is a-1, p-2, l-1, e-1
So p comes first followed by a e l (thats in alphabetical order).

Example Input/Output 2:
Input:
czechoslovakia

Ouput:
acoehiklsvz
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l=0,m=0,n=0,b[26]={0};
char a[150],d,c[26];
scanf("%[^\n]",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
    k=0;
    for(j=i+1;j<l;j++)
    {
        if(a[i]==a[j]&&a[i]!='@'&&a[i]!=" ")
        {
        k++;
        a[j]='@';
        }
    }
    if(a[i]!='@')
    {
        b[m]=k+1;
        c[m]=a[i];
        m++;
    }
}
for(i=0;i<m;i++)
{
    for(j=i+1;j<m;j++)
    {
        if(b[i]<b[j]||(b[i]==b[j]&&c[i]>c[j]))
        {
            d=c[i];
            c[i]=c[j];
            c[j]=d;
            n=b[i];
            b[i]=b[j];
            b[j]=n;
        }
    }
}
for(i=0;i<m;i++)
{
    printf("%c",c[i]);
}
}
