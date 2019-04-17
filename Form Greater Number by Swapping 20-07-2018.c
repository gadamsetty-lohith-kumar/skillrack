/*
Form Greater Number by Swapping

An integer N and an array of M integers (representing the positions of the digits in N) are passed as the input. The program must swap the digits of N at the given positions with their adjacent digits such that the resulting number formed is greater than the original number. A digit can be swapped with the adjacent digit to its left or the adjacent digit to its right whichever leads to a greater number. If no greater number can be formed by swapping the digit at given position then the digit must not be swapped.

Note: Digits must be swapped in the order of the positions given.

Boundary Condition(s):
2 <= Number of digits in N <= 100

Input Format:
The first line contains N.
The second line contains M.
The third line contains M integers separated by space(s).

Output Format:
The first line contains an integer with its digits swapped.

Example Input/Output 1:
Input:
2343214
2
2 5

Output:
3243214

Explanation:
Swapping at position 2:
Digit at the 2nd position of 2343214 is 3.
3 can be swapped with either 2 (resulting in 3243214) or 4 (resulting in 2433214).
Since 3243214 > 2433214, 3 is swapped with 2 and the number becomes 3243214.

Swapping at position 5:
Digit at the 5th position of 3243214 is 2.
2 can be swapped with either 3 (resulting in 3242314) or 1 (resulting in 3243124).
Since both the resulting numbers 3242314 and 3243124 are smaller than the original number, no swapping is done.

Example Input/Output 2:
Input:
902374890234
3
3 6 10

Output:
920378492034


Example Input/Output 2:
Input:

699731787022457192428222653599464501803523986
13
1 2 4 5 7 8 9 10 11 20 25 44 45

Expected Output:
997637871220457192482226253599464501803523986
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,l=0,a[100],q,p=0;
    char m[100],j;
    scanf("%s",&m);
    l=strlen(m);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    scanf("%d",&a[i]);
    for(i=0;i<q;i++)
    {    p=a[i]-1;
        if(m[p]>m[p-1]&&p!=0)
        {
            j=m[p];
            m[p]=m[p-1];
            m[p-1]=j;
        }
         else if(m[p]<m[p+1])
        {
            j=m[p];
            m[p]=m[p+1];
            m[p+1]=j;
        }

    }
    for(i=0;i<l;i++)
    printf("%c",m[i]);
}
