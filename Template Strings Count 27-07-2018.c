/*
Template Strings Count

A template is a special string which can be used to generate multiple strings consisting of characters from the template. For example, the template string ab can be used to generate strings ab, aba, bab, aabb, bbaa, babb, bbaba and so on. N strings are passed as the input. The program must print the number of templates used in generating the N strings.

Note:
All the characters from the template must be present in the generated string.
Template string must not have any repeated characters in it.
The order of the characters in template strings are ignored (i.e. abc is same as bca).

Boundary Condition(s):
1 <= N <= 100
1 <= Length of string <= 100

Input Format:
The first line contains N.
The second line contains N strings separated by space(s).

Output Format:
The first line contains the count of the templates used.

Example Input/Output 1:
Input:
5
abc abaa banana ban caba

Output:
3

Explanation:
The template string abc is used to generate the strings abc and caba.
The template string ab is used to generate the string abaa.
The template string abn is used to generate the strings banana and ban.
So there are three template strings used to generate the five strings.

Example Input/Output 2:
Input:
6
aaaa bbbb aa bbb red re

Output:
4

Input:
3
aa aaa a
Expected Output:
1
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m=0,n,o,p,q,c[100]={0},d[100]={0},s=0;
char a[100][100],b[1][100];
scanf("%d ",&n);
m=n;
for(i=0;i<n;i++)
scanf("%s",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(strlen(a[i])>strlen(a[j]))
        {
            strcpy(b[0],a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],b[0]);
        }
    }
}
for(i=0;i<n;i++)
{s=0;
    for(j=0;j<strlen(a[i]);j++)
    {
        for(k=j+1;k<strlen(a[i]);k++)
        {
            if(a[i][j]==a[i][k]&&a[i][j]!='@'&&a[i][k]!='@')
            {
            a[i][k]='@';
            s++;
            }
        }
    }
    c[i]=strlen(a[i])-s;
}

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {  p=0;
       q=0;
        for(k=0;k<strlen(a[i]);k++)
        {    o=0;
            for(l=0;l<strlen(a[j]);l++)
            {
                //printf("%c %c ",a[i][k],a[j][l]);
                if(a[i][k]==a[j][l]&&a[i][k]!='@'&&d[i]!=1)
                {
                    o=1;
                    p++;
                  //  printf("%c %c ",a[i][k],a[j][l]);
                }
            }
            if(o==1)
            q++;
        }
        //printf("%d %d ",q,p);
        if(q==c[i]&&p==c[j])
        {
         m--;
         d[j]=1;
        }
    }
  //  printf("\n");
}
printf("%d",m);
}
