/*
Minimum Spring Hops

A series of springs are represented as an array of size N. Each value in array defines the power of spring to push the object forward. A starting spring value M is passed as input. Find the minimum number of hops needed for the object to reach the last spring. If last spring cannot be reached print -1.

Boundary Condition(s):
2 <= N <= 1000
1 <= M <= 1000

Input Format:
The first line contains the value of N and M separated by space(s).
The second line contains N integers separated by space(s).

Output Format:
The first line contains the minimum number of hops to reach the last spring.

Example Input/Output 1:
Input:
9 3
5 3 2 1 1 3 1 3 4

Output:
1

Explanation:
Starting value 3 occurs thrice. Traversing from 3 at 6th position will be minimal to reach the last spring (3->4).

Example Input/Output 2:
Input:
10 5
5 3 2 1 8 3 7 3 1 6

Output:
3

Explanation:
There is only one starting value 5. The number of hops needed is 3 (5->3->1->6).


Example Input/Output 3:
Input:

14 4
4 2 8 7 1 9 5 8 1 1 1 1 1 6
Expected Output:
-1
Your Program Output:
3


Example Input/Output 4:
Input:

14 8
4 2 8 7 1 9 4 8 1 1 1 1 1 6
Expected Output:
4
Your Program Output:
1
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k=0,a[1000],n,l=0,o=0,p=0,min=1000;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    if(a[i]==k)
    {p=1;
    j=i;
    l=0;
        for(j=i+a[j];j<n;j++)
        {
                if(j<n-1)
                p++;
                else
                {
                o=1;
                }
                if(j==n-1)
                l++;
                j=(j+a[j])-1;
        }
      if(min>p&&l!=0)
      min=p;
    }
}
if(o==0)
printf("-1");
else
printf("%d",min);
}
