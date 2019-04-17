/*
Right Angled Triangle Check
1
Three sides of a triangle are passed as input. The program must print yes if the sides form a right angled triangle. Else the program must print no.

Boundary Condition(s):
1 <= Length of the sides <= 999999999

Input Format:
The first line contains three integers denoting the length of the sides separated by a space.

Output Format:
The first line contains yes or no

Example Input/Output 1:
Input:
5 4 3

Output:
yes

Example Input/Output 2:
Input:
8 5 6

Output:
no
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k;
scanf("%d%d%d",&i,&j,&k);
if((i*i+j*j==k*k)||(j*j+k*k==i*i)||(k*k+i*i==j*j))
printf("yes");
else
printf("no");
}
