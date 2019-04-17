'''
Matrix Non-Border Elements Sum

An integer matrix of size RxC is passed as the input to the program. The program must print the sum of elements which are not present in the border of the matrix.

Boundary Condition(s):
2 <= R,C <= 50

Input Format:
The first line contains the value of R and C separated by space(s).
The next R lines contain C integers each separated by space.

Output Format:
The first line contains the sum of elements which are not present along the border.

Example Input/Output 1:
Input:
4 4
18 5 5 21 
23 24 1 25 
8 5 15 17 
23 4 29 2 

Output:
45

Explanation:
The elements which are not present along the border are 24 1 5 15.
Hence the output is 24+1+5+15 = 45.

Example Input/Output 2:
Input:
5 6
93 60 84 26 22 95 
99 96 86 90 34 0 
0 83 63 10 74 75 
36 35 98 4 22 18 
20 8 27 94 64 30 

Output:
695
'''

#Your code below
n=(input().split())
k=0
for i in range (0,int(n[0])):
    a=input().split()
    for j in range(0,int(n[1])):
        if (j!=0 and j!=int(n[1])-1 and i!=0 and i!=int(n[0])-1):
            k=k+int(a[j])
print (k)            
