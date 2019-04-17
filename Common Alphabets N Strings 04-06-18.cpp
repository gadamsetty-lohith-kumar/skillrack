/*
Common Alphabets N Strings

N string values are passed as input to the program. Each string will contain only the alphabets a-z in lower case. A given alphabet may be repeated any number of times. The program must print the count C of the alphabets that are present in all the N string values.

Input Format:
The first line contains N.
Next N lines contain the N string values.

Output Format:
The first line contains C.

Boundary Conditions:
2 <= N <= 500
1 <= Length of the string value <= 1000

Example Input/Output 1:
Input:
3
mnppqqr
ajkmnnm
poormanagement

Output:
2

Explanation:
Only 2 alphabets m and n are present in all the three string values.

Input:
5
ptkogphdtykhbgvqmykw
pnmcbtqodtdqjaeyayyp
yfvepcwyqyonglozltjo
nxfhvacwpvtxsrtvhwpt
dsaadnwrdpaqbalybvge

Expected Output:
1

*/

#include <iostream>

using namespace std;

main()
{
int i,j=0,k=0,l,a[26],n,o=0;
char b;
string c;
for(i=0;i<26;i++)
a[i]=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>c;
l=c.length();
for(k=0;k<l;k++)
{
    j=c[k]-97;
    if(a[j]==i)
    a[j]=a[j]+1;
}
}
for(i=0;i<26;i++)
if(a[i]==n)
o++;
cout<<o;
}
