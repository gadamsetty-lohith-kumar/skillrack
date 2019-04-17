'''
X in Rectangular Pattern

The program must accept an integer N as the input. The program must print the pattern as shown in the Example Input/Output sections.

Boundary Condition(s):
5 <= N <= 50

Input Format:
The first line contains the value of N.

Output Format:
The first N lines contain the desired pattern as shown in the Example Input/Output sections.

Example Input/Output 1:
Input:
15

Output:
***************
**-----------**
*-*---------*-*
*--*-------*--*
*---*-----*---*
*----*---*----*
*-----*-*-----*
*------*------*
*-----*-*-----*
*----*---*----*
*---*-----*---*
*--*-------*--*
*-*---------*-*
**-----------**
***************

Example Input/Output 2:
Input:
20

Output:
********************
**----------------**
*-*--------------*-*
*--*------------*--*
*---*----------*---*
*----*--------*----*
*-----*------*-----*
*------*----*------*
*-------*--*-------*
*--------**--------*
*--------**--------*
*-------*--*-------*
*------*----*------*
*-----*------*-----*
*----*--------*----*
*---*----------*---*
*--*------------*--*
*-*--------------*-*
**----------------**
********************
'''



#Your code below
n=int(input())
k=0
l=n-1
for i in range (0,n):
    for j in range (0,n):
        if(i==0 or i==n-1 or j==0 or j==n-1 or j==k or j==l):
            print("*",end="")
        else:
            print("-",end="")
    k=k+1 
    l=l-1
    print()        
