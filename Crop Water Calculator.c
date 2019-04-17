/*
Crop Water Calculator

A farmer wants to plant paddy crops in his farm. So he visited a near by agriculture shop to buy seeds. The shopkeeper showed the farmer various varieties of paddy seed. Each variety of paddy seed  varies from one another especially on the Number of Days D needed to water and it's Growth Rate G. The quantity of water in certain units required by a single crop in a single day is same as the growth rate on that particular day. The Growth Rate G reduces by a value R everyday which will reduce the water consumption by crops. The shopkeeper issued S number of seeds to the farmer and assuming all seeds will grow,  write a program to find the units of Water Consumption W for D days.

Input Format:
The first line contains the value of Number of Seeds S, Growth Rate G, Number of Days D to grow and the Reduction in Growth Rate R each separated by a space.

Output Format:
The first line contains the total units of Water Consumption W in D days.

Boundary Conditions:
1 <= S, G, D, R <= 999999

Example Input/Output 1:
Input:
10 5 5 1

Output:
150

Explanation:
The total number of seeds S the farmer will buy is 10.
The number of days D the crop has to be watered is 5
The growth rate G of each seed is 5.
The growth rate G is reduced by R-value 1 on every day. So, for the day 1 G is 5, day 2 G is 4, day 3 it is 3 and so on.
The Water Consumption W for 5 days = 10*5 + 10*4 + 10*3 + 10*2 + 10*1 = 150 units

Example Input/Output 2:
Input:
100 10 10 0

Output:
10000
*/


#include<stdio.h>
#include <stdlib.h>
int main()
{
long long int i,j,k,l,m,n,o=0;
scanf("%lld%lld%lld%lld",&k,&l,&m,&n);
for(i=0;i<m;i++)
{
    o=o+(l*k);
    l=l-n;
}
printf("%lld",o);
}
