/*
Deliver from Farm to Shops

A truck needs to deliver vegetables from a farm to several shops. The truck driver has decided to visit the nearest shop from the farm first and then the second nearest shop from the farm and so on. To travel from farm to the shops, the truck has to travel through cities. There are N roads (one-way) connecting two different locations (Location can be any of these - farm, city or shop) are passed as input. The farm has no incoming road and the shops have no outgoing road. Print the shops in the order of their visit by the truck. (Hint: Cities are identified by the fact that they have outgoing roads.)

Note: The distance from the farm to a shop is calculated by the number of cities it has to cross to reach the shop.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.
The next lines contain the name of the two locations (source and destination) connected by a road separated by space(s).

Output Format:
The first line contains the name of the shops separated by a space.

Example Input/Output 1:
Input:
5
farm mid1
mid1 mid2
mid2 shop1
mid2 mid3
mid3 shop2

Output:
shop1 shop2

Explanation:
shop1 is visited through the route farm->mid1->mid2->shop1
shop2 is visited through the route farm->mid1->mid2->mid3->shop2

Example Input/Output 2:
Input:
8
a b
a c
a d
c e
e f
d h
f g
b f

Output:
h g

Explanation:
h is visited through the route a->d->h
g is visited through the route a->b->f->g


Example Input/Output 3:
Input:
8
ab ba
ab hj
ab jk
hj kl
kl mn
jk mn
mn op
jk ho


Output:
ba ho op


#include <iostream>

using namespace std;

int main()
{
int i,j,k,l=0,m=0,n,c[1000]={0},e[1000]={0},f[1000]={0},o,p=0;
string a[1000],b[1000],d[1000],g;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i]>>b[i];
for(j=0;j<n;j++)
{
    m=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[j])
        {
            m++;
            break;
        }
    }
    if(m==0&&c[j]==0)
    {
        for(k=j+1;k<n;k++)
        {
            if(b[k]==b[j])
            c[k]=1;
        }
       // cout<<b[j]<<" ";
        d[l]=b[j];
        e[l]=j;
        l++;
    }
}
for(i=0;i<l;i++)
{o=e[i];
    for(j=0;j<100000;j++)
    {
            for(k=0;k<n;k++)
            {
                if(a[o]==b[k])
                {
                    o=k;
                    break;
                }
            }
            if(a[o]==a[0])
            break;
    }
    f[i]=j;
}
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(f[i]>f[j])
        {
            p=f[i];
            f[i]=f[j];
            f[j]=p;
            g=d[i];
            d[i]=d[j];
            d[j]=g;
        }
    }
}
for(i=0;i<l;i++)
cout<<d[i]<<" ";
}
