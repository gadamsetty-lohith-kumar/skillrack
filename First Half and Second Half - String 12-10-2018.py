'''
First Half and Second Half - String

The program must accept a string S as the input. The program must print the alphabets of the string S which are in the first half of the alphabets (a to m) and then the program must print the alphabets in the string S which are in the second half of the alphabet (n to z) as the output.
Note: The alphabets are only in lower case.

Boundary Condition(s):
1 <= Length of S <= 100

Example Input/Output 1:
Input:
electronics

Output:
elecictrons

Explantion:
The first half of the alphabets are e l e c i c
The second half of the alphabets are t r o n s
Hence the output is elecictrons

Example Input/Output 2:
Input:
keyboard

Output:
kebadyor
'''

a=input()
l=len(a)
for i in range (0,l):
    if (a[i]>='a'and a[i]<='m'):
        print(a[i],end="")
for i in range (0,l):
    if(a[i]>='n'and a[i]<='z'):
        print(a[i],end="")
