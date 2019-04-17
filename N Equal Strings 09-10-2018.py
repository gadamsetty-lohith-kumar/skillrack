'''
N Equal Strings

The program must accept a string S and an integer N as the input. The program must print N equal parts of the string S if the string S can be divided into N equal parts. Else the program must print -1 as the output.

Boundary Condition(s):
2 <= Length of S <= 1000
2 <= N <= Length of S

Example Input/Output 1:
Input:
whiteblackgreen 3

Output:
white black green

Explanation:
Divide the string whiteblackgreen into 3 equal parts as white black green
Hence the output is white black green

Example Input/Output 2:
Input:
pencilrubber 5

Output:
-1
'''

#Your code below
a=(input().split())
l=len(a[0])
k=int(a[1])
m=l/k
if(l%k==0):
    for i in range (0,l):
        print(a[0][i],end="")
        if (i+1)%(m)==0:
            print(end=" ")
else:            
    print("-1")
