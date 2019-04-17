
'''
Adjacent Even Digits

The program must accept an integer N as the input. The program must print the digits surrounded by even digits on both sides. The first and last digits have only one digit adjacent digit to them. So consider only the single adjacent digit for them. If there is no digit surrounded by even digits, then the program must print -1 as the output.

Boundary Condition(s):
11 <= N <= 999999999

Input Format:
The first line contains the value N.

Output Format:
The first line contains either the digits having even adjacent digits or -1.

Example Input/Output 1:
Input:
14689025

Output:
1695

Explanation:
The adjacent digit of 1 is 4 (even number). So 1 is printed.
The adjacent digits of 4 are 1 and 6 (only 6 is even). So 4 is not printed.
The adjacent digits of 6 are 4 and 8 (both are even numbers). So 6 is printed.
The adjacent digits of 8 are 6 and 9 (only 6 is even). So 8 is not printed.
The adjacent digits of 9 are 8 and 0 (both are even numbers). So 9 is printed.
The adjacent digits of 0 are 9 and 2 (only 2 is even). So 0 is not printed.
The adjacent digits of 2 are 0 and 5 (only 0 is even). So 2 is not printed.
The adjacent digit of 5 is 2 (even number). So 5 is printed.
Hence the output is 1695.

Example Input/Output 2:
Input:
1357935

Output:
-1
'''



#Your code below
i=(input())
l=int(len(i))
q=0
for j in range (0,l):
    if j!=l-1:
        k=int(i[j+1])
    n=int(i[j-1])
    if (j==0) and (k%2==0):
        print(i[j],end="")
        q=1
    elif (j==l-1)and(n%2==0):
        print(i[j],end="")
        q=1
    elif (k%2==0)and(n%2==0):
        print(i[j],end="")
        q=1
if q==0:
    print("-1")
