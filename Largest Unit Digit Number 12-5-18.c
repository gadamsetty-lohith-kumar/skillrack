/*
Largest Unit Digit Number

Two integers X and Y are given as input. The program must print the integer with largest unit digit. If the unit digits are equal, then print the larger integer.

Boundary Condition(s):
1 <= X, Y <= 1000000

Input Format:
The first line contains X and Y separated by a space.

Output Format:
The first line contains an integer value.

Example Input/Output 1:
Input:
51 23

Output:
23

Example Input/Output 2:
Input:
77 87

Output:
87
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,m,n,o;
scanf("%d%d",&m,&n);
i=m%10;
j=n%10;
if(i>j)
o=m;
else if(i<j)
o=n;
else if(m>n)
o=m;
else
o=n;
printf("%d",o);
}
