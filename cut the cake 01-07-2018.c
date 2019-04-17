/*
Cut the Cake

Initial size of a cake and values of position of N cuts are passed as the input. The program must print the size of largest cake piece after the N cuts.


Boundary Condition(s):
10 <= N <= 999999

Input Format:
The first line contains the size of cake.
The second line contains the values of position of N cuts in ascending order.

Output Format:
The first line contains the size of largest cake piece.

Example Input/Output 1:
Input:
16
3 5 8

Ouput:
8

Explanation :
After the first cut the size of piece 1 is 3, after the second cut the size of piece 2 is 2,after the third cut the size of piece 3 is 3 and after the fourth cut the size of piece 4 is 8.
 Finally the largest cake piece is 8.

Example Input/Output 2:
Input:
25
5 10 16

Ouput:
9

Explanation :
After the first cut the size of piece 1 is 5, after the second cut the size of piece 2 is 5,after the third cut the size of piece 3 is 6 and after the fourth cut the size of piece 4 is 9.
Finally the largest cake piece is 9.
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i=0,j,k=0,a[100]={0},l;
scanf("%d",&l);
while(scanf("%d",&a[i])>=1)
{
i++;
}
a[i]=l;
j=i;
k=a[0];
for(i=0;i<j;i++)
{
    a[i]=a[i+1]-a[i];
    if(a[i]>k)
    k=a[i];
}
printf("%d",k);
}
