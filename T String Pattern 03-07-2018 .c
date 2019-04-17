/*
T String Pattern

Given two strings S1 and S2, the program must print the pattern as shown in the Example Input/Output section.

Note:
The string S1 always comes in the first row.
The string S2 is printed along the last matching column of S1.

Boundary Condition(s):
1 <= Length of S1, S2 <= 100

Input Format:
The first line contains S1.
The second line contains S2.

Output Format:
The pattern is printed as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
trophy
panther

Output:
trophy
---a--
---n--
---t--
---h--
---e--
---r--

Example Input/Output 2:
Input:
morning
ninja

Output:
morning
-----i-
-----n-
-----j-
-----a-
*/



#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l,m=0;
char a[100],b[100];
scanf("%s%s",a,b);
k=strlen(a);
l=strlen(b);
printf("%s\n",a);
for(i=0;i<l;i++)
{
    for(j=0;j<k;j++)
    {
        if(a[j]==b[0]&&i==0)
        m=j;
        if(m==j&&i!=0)
        printf("%c",b[i]);
        else if(i!=0)
        printf("-");
    }
    printf("\n");
}

}
