/*
First and Last Odd Digits

Given N positive integers, the program must print the integers if the first and last digits are odd digits.

Boundary Condition(s):
1 <= N <= 9999

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The first line contains the specified output.

Example Input/Output 1:
Input:
4
21 33 12 15

Output:
33 15

Example Input/Output 2:
Input:
7
123 456 567 21 58 93 103

Output:
123 567 93 103
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
int i,j,k,l,f,n;
cin>>n;
for(i=0;i<n;i++)
{
cin>>j;
k=j;
 f=j%10;
    while(j>0)
    {
        l=j%10;
        j=j/10;
    }
    if(f%2==1&&l%2==1)
    cout<<k<<" ";
}
}
