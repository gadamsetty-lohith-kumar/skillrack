/*
Robot Ditch Catch-22

A robot is programmed to move forward F meters and backwards again, say B meters, in a straight line. The Robot covers 1 meter in T units of time. On Robot's path there is a ditch at a distance FD from initial position in forward direction as well as a ditch at a distance BD from initial position in backward direction. This forward and backward movement is performed repeatedly by the Robot.

Your task is to calculate amount of time taken, before the Robot falls in either ditch, if at all it falls in a ditch.


Input Format:
First line contains total number of test cases, denoted by N
Next N lines, contain a tuple containing 5 values delimited by space
F B T FD BD, where
- F denotes forward displacement in meters
- B denotes backward displacement in meters
- T denotes time taken to cover 1 meter
- FD denotes distance from Robot's starting position and the ditch in forward direction
- BD denotes distance from Robot's starting position and the ditch in backward direction


Output Format:
For each test case print time taken by the Robot to fall in the ditch and also state which ditch he falls into. Print F for forward and B for backward. Both the output must be delimited by whitespace
OR
Print No Ditch if the Robot does not fall in either ditch


Boundary Conditions / Constraints:
First move will always be in forward direction
1 <= N <= 100
F > 0
B > 0
T > 0
FD > 0
BD > 0
All input values will be positive integers.


  THESE THREE ARE GIVEN TEST CASES INCLUDING HIDDEN TEST CASES

Example Input/Output 1:
Input:
3
9 4 3 13 10
9 7 1 11 13
4 4 3 8 12

Output:
63 F
25 F
No Ditch

Input:
3
11 19 3 5 18
19 17 4 11 13
10 10 1 23 23
Expected Output:
15 F
44 F
No Ditch


Input:
6
8 4 7 11 22
4 5 4 25 6
4 9 3 6 29
7 10 6 24 12
10 10 1 9 7
12 15 2 10 18
Expected Output:
133 F
216 B
231 B
408 B
9 F
20 F

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i=0,j,k=0,l,n,front,back,time1,frontditch,backditch;
scanf("%d",&n);
for(l=0;l<n;l++)
{
scanf("%d%d%d%d%d",&front,&back,&time1,&frontditch,&backditch);
backditch=-backditch;
if(front==back&&frontditch==front)
printf("%d F",(front*time1));
else if(front>frontditch)
printf("%d F",time1*frontditch);
else if(front==back&&frontditch!=front&&front<frontditch)
printf("No Ditch");
else if(back>-(backditch))
printf("%d B",time1*backditch);
else
{
    for(j=0;j<100000;j++)
    {
        if(j%2==0)
        {
        i=i+front;
        k=k+front;
       // printf("%d %d \n",i,k);
        }
        else
        {
        i=i-back;
        k=k+back;
       // printf("%d %d \n",i,k);
        }
        if(i>=frontditch||i<=backditch)
        {
          //  printf("%d %d %d %d \n",i,k,frontditch,backditch);
        break;
        }
    }
if(i<0&&i==(backditch))
printf("%d B",((k)*time1));
else if(i<0)
printf("%d B",((k-1)*time1));
else if(i>0&&i==frontditch)
printf("%d F",(k*time1));
else
printf("%d F",((k-1)*time1));
i=0;k=0;
}
printf("\n");
}
}
