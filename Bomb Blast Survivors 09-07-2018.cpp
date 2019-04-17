/*
Bomb Blast Survivors

An N*N grid is passed as input to the program. There are bombs planted in the grid. Each bomb is detonated and destroys all the blocks in its explosion radius (If the radius is 1, the bomb can destroy all the 8 blocks surrounding it). There are people inside the grid represented by P. The bombs are represented by an integer which is the explosion radius of the bombs. The program must print the number of survivors after the explosion of all bombs.

Boundary Condition(s):
1 <= N <= 100
1 <= Explosion radius <= 9

Input Format:
The first line contains N
The next N lines contain N characters each.

Output Format:
The first line contains the count of survivors.

Example Input/Output 1:
Input:
6
**P***
****P*
*P*1**
*****P
***P*P
***PP2

Output:
2

Explanation:
After explosion the grid becomes (X represents exploded area),
**P***
**XXX*
*PX1X*
**XXXX
***XXX
***XX2

Example Input/Output 2:
Input:
6
*2*P**
******
*P*1P*
*P****
*****P
*1*P**

Output:
3
*/


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
int i,j,k,l,m=0,n,o=0;
char a[100][100];
cin>>n;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i][j]>='1'&&a[i][j]<='9')
        {
            m=a[i][j]-48;
            for(k=i-m;k<=i+m;k++)
            {
                for(l=j-m;l<=j+m;l++)
                {
                    if(a[k][l]=='P')
                a[k][l]='*';
                }
            }
        }
    }
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[i][j]=='P')
o++;
cout<<o;
}
