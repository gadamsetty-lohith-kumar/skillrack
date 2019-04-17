/*
Lucky Draw Winner

N players(with jersey numbered from 1 to N) sat in a line to play a game. A number K is randomly drawn out from a box. On each draw, the player at the position K is eliminated from the game. Print the jersey number of the winner after N-1 draws.
Note: After each elimination, the positions are filled by the person next to it and hence there is no gap between players after elimination.

Boundary Condition(s):
2 <= N <= 50

Input Format:
The first line contains the value of N.
The second line contain N values separated by space(s).
The third line contain N-1 values separated by space(s).

Output Format:
The first line contains the jersey number of the winner.

Example Input/Output 1:
Input:
6
100 200 300 400 500 600
1 4 2 3 1

Output:
400

Explanation:
The initial jersey numbers of the players are, 100 200 300 400 500 600
After removing player at position 1, the jersey numbers of the remaining players are 200 300 400 500 600
After removing player at position 4, the jersey numbers of the remaining players are 200 300 400 600
After removing player at position 2, the jersey numbers of the remaining players are 200 400 600
After removing player at position 3, the jersey numbers of the remaining players are 200 and 400
After removing player at position 1, the jersey number of the remaining player is 400

Example Input/Output 2:

Input:
11
7 18 10 5 25 17 16 12 34 99 26
2 5 8 6 4 2 3 4 2 2
Output:
7
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,n,j,k=0,l,a[50],b[50];
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
scanf("%d",&b[i]);
for(i=1;i<n;i++)
{
    k=0;
    for(j=1;j<=n;j++)
    {
      if(a[j]!=-1000)
      {
         k++;
      }
      if(k==b[i])
      {
          a[j]=-1000;
      break;
      }
    }
}
for(i=1;i<=n;i++)
if(a[i]!=-1000)
{
    printf("%d",a[i]);
    break;
}
}
/*
using vectors c++

#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> a,b;
int n,j,i;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>j;
    a.push_back(j);
}
for(i=0;i<n-1;i++)
{
    cin>>j;
    b.push_back(j);
}
for(i=0;i<n-1;i++)
{
    a.erase(a.begin()+b[i]-1);
}
cout<<a[0];
}
*/
