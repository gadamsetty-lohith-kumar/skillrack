/*
Replacing Digit With Values In Position

Given an integer N as input, the program must replace every digit of N with the value in the position and print the resultant number.

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains value of integer N.

Output Format:
The first line contains the resultant number after replacing every digit of N with the value in the position.

Example Input/Output 1:
Input:
999999993

Output:
333333339

Explanation:
3 is present in the 9th position of given N.
9 is present in the 3rd position of given N.

Example Input/Output 2:
Input:
23456789

Output:
34567890

Explanation:
3 is present in the 2nd position of given N.
4 is present in the 3rd position of given N.
5 is present in the 4th position of given N.
6 is present in the 5th position of given N.
7 is present in the 6th position of given N.
8 is present in the 7th position of given N.
9 is present in the 8th position of given N.
Nothing is present in the 9th position of given N, hence 0 is printed.
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,l;
char a[10];
scanf("%s",&a[i]);
l=strlen(a);
for(i=0;i<l;i++)
{
   j=a[i];
   j=j-49;
   if(j<l)
   printf("%c",a[j]);
   else
   printf("0");
}
}
