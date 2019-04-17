/*
Structure Laptop with Minimum Cost

The program must accept an integer X followed by the brand name or the product number of N laptops with their costs.
The program must print either the brand name or the product number of a laptop which has the minimum cost among N laptops.
If X is 1 then X is followed by the brand name. If X is 2 then X is followed by the product number. Fill in the missing lines of code so that
the program runs successfully.
Note: If two or more laptops have the same cost then print the information of first occurring laptop.

Input Format:
The first line contains the value of N.
The next N lines contain an integer, a string (brand name) or an integer (product number) and an integer (cost) separated by space(s).

Output Format:
The first line contains either a string (brand name) or an integer (product number) of the laptop which has the minimum cost among N laptops.

Example Input/Output 1:
Input:
4
1 Sony 70000
2 89793456 30000
2 65765767 60000
1 HP 45000

Output:
89793456

Example Input/Output 2:
Input:
3
1 Samsung 50000
2 76576777 45000
1 Acer 20000

Output:
Acer
*/

#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
struct laptops
{
    int X;
    int cost;
    union name
    {
        char brandName[101];
        int productNumber;
    } nameOrNum;
};
int main()
{
    int N, X, min=INT_MAX, minIndex=-1;
    scanf("%d",&N);
    struct laptops laptop[N];
    for (int index=0; index<N; index++)
    {
        scanf("%d",&X);
        if(X==1)
        {
            laptop[index].X=1;
            scanf("%s %d",laptop[index].nameOrNum.brandName,&laptop[index].cost);
        }

        else if(X==2)
        {
            laptop[index].X=2;
            scanf("%d %d",&laptop[index].nameOrNum.productNumber,&laptop[index].cost);
        }
    }

//    written code from here

//printf("%s",laptop[0].nameOrNum.brandName);
int i,j=0,k,mi=laptop[0].cost;
for(i=1;i<N;i++)
{
    if(laptop[i].cost<mi)
    {
        mi=laptop[i].cost;
        j=i;
    }
}
if((laptop[j].X==1))
printf("%s",laptop[j].nameOrNum.brandName);
else
printf("%d",laptop[j].nameOrNum.productNumber);

//       written code to here


return 0;
}
