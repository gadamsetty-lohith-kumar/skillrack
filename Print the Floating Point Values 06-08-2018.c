/*
Print the Floating Point Values

The program must accept a string value S as the input. The program must print all the floating point values in the string S as output.

Boundary Condition(s):
3 <= Length of String S <= 49

Input Format:
The first line contains the string value S.

Output Format:
The list of lines contain all the float values in S.

Example Input/Output 1:
Input:
hello12.34madam45.67

Output:
12.34
45.67

Explanation:
In the given string, 12.34 and 45.67 are the float values. So, 12.34 and 45.67 are printed as output.

Example Input/Output 2:
Input:
987.45 larger than 2635.67

Output:
987.45
2635.67
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j=0,k=0,l,m=0,n;
char a[50],b[50];
scanf("%[^\n]",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
    if(a[i]>='0'&&a[i]<='9')
    {
        b[j]=a[i];
        j++;
        m=1;
    }
    else if(a[i]=='.')
    {
        b[j]=a[i];
        j++;
        k=1;
    }
    else
    m=0;
    if((m==0||i==l-1)&&k==1)
    {
        printf("%s\n",b);
        j=0;
        k=0;
    }
    else if (m==0&&k==0)
    {
        j=0;
    }

}

}
