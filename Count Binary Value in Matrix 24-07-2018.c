/*
Count Binary Value in Matrix

Accept an integer matrix with size RxC and N as input, the matrix contains only 0's and 1's. The program must print the count of the binary value of N present in the matrix (row-wise and column-wise).

Boundary Condition(s):
1 <= R, C <= 49
1 <= N <= 100

Input Format:
The first line contains the integer value of R and C separated by space.
The next R lines contain C integers each separated by space.
The R+2th line contains the integer value of N.

Output Format:
The first line contains the count of the binary value of N present in the matrix (row-wise and column-wise).

Example Input/Output 1:
Input:
4 5
1 0 1 0 1
0 0 0 0 0
1 1 1 1 1
1 0 1 0 0
5

Output:
6

Explanation:
The value of N = 5 and the binary representation of N is 1 0 1.
To find row-wise,
In 1st row, the binary value (1 0 1) occurred two times, so that row-wise count = 2.
In the 2nd row, there is no binary value of 5 (1 0 1).
In the 3rd row, there is no binary value of 5 (1 0 1).
In the 4th row, the binary value of 5 (1 0 1) occured one time. So, row-wise count = 2 + 1 = 3.

To find column-wise,
In 1st column, the binary value of 5 (1 0 1) occurred one time, so that column-wise count = 1.
In the 2nd column, there is no binary value of 5 (1 0 1).
In the 3rd column, the binary value of 5 (1 0 1) occurred one time, so column-wise count = 1 + 1 = 2.
In the 4th column, there is no binary value of 5 (1 0 1).
In the 5th column, the binary value of 5 (1 0 1) occurred one time, so that column-wise count = 2 + 1 = 3.

Then print the sum of the row-wise count and column-wise count is 6.

Example Input/Output 2:
Input:
5 5
1 0 0 1 0
0 1 0 1 1
0 0 1 0 0
1 0 0 0 0
0 1 0 0 0
4

Output:
9
*/

/*

    with printing some intermediate things

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,l,m,n,a[40],b[50][50],d,o,p=0,q=0,r=0;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);
scanf("%d",&d);
while(d>0)
{
    a[k]=d%2;
    d=d/2;
    printf("%d ",a[k]);
    k++;
}
printf("\n k is %d\n",k);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(b[i][j]==a[k-1])
        {printf("%d %d ",i,j);
            o=0;
            q=i;
            r=j;
        for(l=k-1;l>=0;l--)
        {
            if(b[q][j]==a[l]&&q<m)
            {
            o++;
            }
            else
                printf("%d %d ",q,j);
            q++;
        }
        if(o==k)
        {
            printf("V ");
        p++;
        }
        o=0;
        for(l=k-1;l>=0;l--)
        {
            if(b[i][r]==a[l]&&r<n)
            {
                o++;
            }
            else
                printf("%d %d ",i,r);
            r++;
        }
        if(o==k)
        {
        p++;
        printf("H ");
        }
        printf("\n");
        }
    }
}
printf("%d",p);
}
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,l,m,n,a[40],b[50][50],d,o,p=0,q=0,r=0;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);
scanf("%d",&d);
while(d>0)
{
    a[k]=d%2;
    d=d/2;
    k++;
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(b[i][j]==a[k-1])
        {
            o=0;
            q=i;
            r=j;
        for(l=k-1;l>=0;l--)
        {
            if(b[q][j]==a[l]&&q<m)
             {
               o++;
             }
            q++;
        }
        if(o==k)
        p++;
        o=0;
        for(l=k-1;l>=0;l--)
        {
            if(b[i][r]==a[l]&&r<n)
            {
                o++;
            }
            r++;
        }
        if(o==k)
        p++;
        }
    }
}
printf("%d ",p);
}
