/*
Largest Even Number

The program must accept two numbers N1 and N2 as the input and it must print the largest possible even number with non-zero unit digit as the output containing all the digits from both the numbers. If an even number with non-zero unit digit cannot be formed using the digits from the two numbers, the program must print -1 as the output.
Note: The last digit must not be zero.

Boundary Condition(s):
1 <= N1, N2 <= 99999999

Input Format:
The first line contains the value of N1 and N2 separated by space.

Output Format:
The first line contains the largest possible even number.

Example Input/Output 1:
Input:
784201 86976

Output:
98877664102

Explanation:
The largest possible even number obtained from both the numbers N1 and N2 is 98877664120. As the last digit must not be zero, the smallest non-zero digit is made as the last digit. So, the output is 98877664102.

Example Input/Output 2:
Input:
9 3

Output:
-1
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i=0,j,k=0,l,a[20],m=0,o,p;
scanf("%d%d",&o,&p);
while(o>0)
{
    a[i]=o%10;
    if(a[i]%2==0&&a[i]!=0)
    k=1;
i++;
o=o/10;
}
while(p>0)
{
    a[i]=p%10;
    if(a[i]%2==0&&a[i]!=0)
    k=1;
    i++;
    p=p/10;
}
if(k==0)
printf("-1");
else
{
for(j=0;j<i;j++)
{
    for(l=j+1;l<i;l++)
    {
        if(a[j]>a[l])
        {
            m=a[j];
            a[j]=a[l];
            a[l]=m;
        }
    }
}
for(j=0;j<l;j++)
{
    if(a[j]%2==0&&a[j]!=0)
    {
    m=j;
    break;
    }
}
for(j=i-1;j>=0;j--)
if(j!=m)
printf("%d",a[j]);
printf("%d",a[m]);
}
}
