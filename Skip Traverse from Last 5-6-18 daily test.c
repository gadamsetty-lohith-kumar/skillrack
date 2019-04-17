/*
Skip Traverse from Last

An array of N integers is given as input. The program must traverse and print the array in reverse order with the following rules. When encountering an even integer skip the next element. When encountering an odd integer skip the next two elements. The array is traversed starting from the last element.

Boundary Condition(s):
2 <= N <= 10000

Input Format:
The first line contains N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the traversed integers separated by a space.

Example Input/Output 1:
Input:
6
23 17 32 27 14 63

Output:
63 32 23

Example Input/Output 2:
Input:
7
37 19 83 74 3 2 82

Output:
82 3 19
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,a[10000],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
        if(a[i]%2==0)
        i--;
        else
        i-=2;
    }

}
