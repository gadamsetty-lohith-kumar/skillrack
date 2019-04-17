/*
Dynamic V Pattern

The program must accept two integers (X, Y) and a character CH as the input. The program must print the desired pattern as shown in the
Example Input/Output section.
Boundary Condition(s):
1 <= X, Y <= 1000
Input Format:
The first line contains the values of X, CH and Y separated by a space.
Output Format:
The list of lines containing the desired pattern as shown in the Example Input/Output section.
Example Input/Output 1:
Input:
3 # 5
Output:
------#
-----#
#---#
-#-#
--#
Example Input/Output 2:
Input:
7 @ 7
Output:
@-----------@
-@---------@
--@-------@
---@-----@
----@---@
-----@-@
------@
Example Input/Output 3:
Input:
10 * 4
Output:
*
-*
--*
---*
----*
-----*
------*-----*
-------*---*
--------*-*
---------*
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,f,s,l=0,w=1,si,fi;
char a;
scanf("%d%c%d",&f,&a,&s);
l=f;
if(s>f)
    l=s;
if(f<=s)
        w=f+s-1;
fi=0;
si=f+s-2;
for(i=l;i>0;i--)
{
    for(j=0;j<w;j++)
    {
        if(j==fi&&i<=f)
            printf("%c",a);
        else if(j==si&&i<=s)
            printf("%c",a);
        else
            printf("-");
    }
    if(i<=f)
    fi++;
    if(i<=s)
    si--;
    if(i<=s)
    w--;
    else
    w++;
    if(i==s+1)
    w=f+s-1;
    printf("\n");
}
}
