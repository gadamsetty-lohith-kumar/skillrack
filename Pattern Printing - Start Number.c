/*
Pattern Printing - Start Number

Given an integer N as the input and a start integer S, print the pattern as given in the Example Input/Output section.

Input Format:
The first line contains S and N, each separated by a space.

Output Format:
2N lines containing the desired pattern.

Boundary Conditions:
2 <= N <= 50
1 <= S <= 20

Example Input/Output 1:
Input:
3 4

Output:
3
4 4
5 5 5
6 6 6 6
6 6 6 6
5 5 5
4 4
3

Example Input/Output 2:
Input:
7 9

Output:
7
8 8
9 9 9
10 10 10 10
11 11 11 11 11
12 12 12 12 12 12
13 13 13 13 13 13 13
14 14 14 14 14 14 14 14
15 15 15 15 15 15 15 15 15
15 15 15 15 15 15 15 15 15
14 14 14 14 14 14 14 14
13 13 13 13 13 13 13
12 12 12 12 12 12
11 11 11 11 11
10 10 10 10
9 9 9
8 8
7

*/

#include<stdio.h>
void printPattern(int base, int N)
{
    int i,j,k=0,l=0;
  for(i=0;i<2*N;i++)
  {
     for(j=0;j<=k;j++)
      {
          printf("%d ",base);
      }

      if(i==N)
      {
          l=1;
      }
      if(l==0&&i!=N-1)
      {
      k++;
      base++;
      }
      else if(i!=N-1)
      {
      k--;
      base--;
      }
      printf("\n");
  }
}
int main()
{
    int start, N;
    scanf("%d%d",&start,&N);
    printPattern(start,N);
    return 0;
}
