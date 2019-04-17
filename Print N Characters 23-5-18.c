/*
Print N Characters

Accept a character C and a positive integer N as input. The program must print N characters starting from C.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains C and N separated by space(s).

Output Format:
The first line contains N characters.

Example Input/Output 1:
Input:
a 4

Output:
abcd

Example Input/Output 2:
Input:
z 5

Output:
zabcd
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k;
char a;
scanf("%c %d",&a,&j);
for(i=0;i<j;i++)
{
    printf("%c",a);
    if(a=='z')
    a='a';
    else if(a=='Z')
    a='A';
    else
    a++;
}

}
