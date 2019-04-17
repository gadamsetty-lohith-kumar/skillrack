'''
Left Right Odd Count

An array of N integers is given as the input to the program. For each integer the program must print the integer if the count of odd integers on the left side is equal to the count of odd integers on the right side. Else the program must print -1 for that integer.

Boundary Condition(s):
1 <= N <= 10^5

Input Format:
The first line contains the value of N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains N integers separated by a space.

Example Input/Output 1:
Input:
6
1 3 4 8 5 7

Output:
-1 -1 4 8 -1 -1

Explanation:
For 1, the count of odd numbers on the left side = 0 and count of odd numbers on the right side = 3. So -1 is printed.
For 3, the count of odd numbers on the left side = 1 and count of odd numbers on the right side = 2. So -1 is printed.
For 4, the count of odd numbers on the left side = 2 and count of odd numbers on the right side = 2. So 4 is printed.
For 8, the count of odd numbers on the left side = 2 and count of odd numbers on the right side = 2. So 8 is printed.
For 5, the count of odd numbers on the left side = 2 and count of odd numbers on the right side = 1. So -1 is printed.
For 7, the count of odd numbers on the left side = 3 and count of odd numbers on the right side = 0. So -1 is printed.

Example Input/Output 2:
Input:
4
1 4 3 8 

Output:
-1 4 -1 -1
'''


#Your code below
n=int(input())
a=input().split()
l=[]
k=0
for i in range(0,n):
    l.append(k)
    if((int(a[i]))%2==1):
        k=k+1
for i in range (0,n):
    if(int(a[i])%2==1):
        m=k-1
    else:
        m=k
    if((l[i])==(m-l[i])):
        print(a[i],end=" ")
    else:
        print("-1",end=" ")
