'''
Integers Occurring Odd Number of Times

The program must accept an integer array of size N as the input. The program must print the integers that are occurring odd number of times in the array as the output. If there is no integer occurring odd number of times, then the program must print -1 as the output.

Boundary Condition(s):
3 <= N <= 100
1 <= Each integer < 100

Example Input/Output 1:
Input:
5
2 3 3 4 5

Output:
2 4 5

Example Input/Output 2:
Input:
4
21 11 21 11

Output:
-1
'''


n=int(input())
a=input().split()
p=0
q=0
for i in range (0,n):
    m=0
    for j in range(i+1,n):
        if(a[i]==a[j]):
            m=m+1
            a[j]=0
    if (m%2==0)and(a[i]!=0):  
        print(a[i],end=" ")
        q=1
if q==0:
    print("-1")
