/*
Alphabet Adjacent Pairs in Sequence

Accept a string S which contains only lower case alphabets and print the count of instances C where in a pair of adjacent characters, the right character is next to the left character in the original alphabetical sequence.

Boundary Condition(s):
1 <= Length of S <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the integer value C

Example Input/Output 1:
Input:
abegh

Output:
2

Explanation:
ab gh are the two instances.

Example Input/Output 2:
Input:
abcdef

Output:
5

Explanation:
ab bc cd de ef are the five instances.
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,l;
char a[1000];
scanf("%s",a);
l=strlen(a);
for(i=0;i<l-1;i++)
if(a[i]+1==a[i+1])
j++;
printf("%d",j);
}
