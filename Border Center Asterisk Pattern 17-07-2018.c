/*
Border Center Asterisk Pattern

Accept an integer N as the input. The program must print the pattern as shown in the Example Input/Output section below. (Note:Integer N is always odd). Asterisk is printed along the border and in the center of the N*N matrix which is printed as the output.

Boundary Condition(s):
1 <= N <= 25

Input Format:
The first line contains the value of N.

Output Format:
The N lines contain the desired pattern.

Example Input/Output 1:
Input:
5

Ouput:
* * * * *
* 1 2 3 *
* 4 * 6 *
* 7 8 9 *
* * * * *

Example Input/Output 2:
Input:
3

Output:
* * *
* * *
* * *

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l=1,m,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==0||j==0|j==n-1||i==n-1||(i==j&&i==n/2&&j==n/2))
        printf("* ");
        else
        {
        printf("%d ",l);
        l++;
        }
        if(i==j&&i==n/2&&j==n/2)
        l++;
    }
    printf("\n");
}

}
