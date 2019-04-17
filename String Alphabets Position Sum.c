/*
String Alphabets Position Sum

Given an input string S of length L containing only lower case alphabets, the program must print the sum of the positions of the alphabets. Position of a is 1, b is 2 and so on till z whose position is 26.

Boundary Conditions:
1 <= L <= 100

Input/ Output Format:
Input:
The first line contains the value of String S.

Output:
The first line contains the sum of positions of the lower case alphabets in S.

Example Input/Output 1:
Input:
abca

Output:
7

Explanation:
The sum of positions is 1+2+3+1 = 7

Example Input/Output 2:
Input:
azd

Output:
31
*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,l=0,k=0;
char a[100];
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
j=a[i]-'0';
k=k+(j-48);
}
printf("%d",k);
}

 /* (or)

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k=0,l;
char a[100];
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
k=k+(a[i]-96);
printf("%d",k);
}
*/
