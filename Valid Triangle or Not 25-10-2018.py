'''
Valid Triangle or Not

The program must accept three angles X, Y and Z as the input. The program must check if the lines with given angles form a valid triangle or not and print 'Valid triangle' if it is valid. Else the program must print 'Not a valid triangle' as the output.

Boundary Condition(s):
0 <= X, Y, Z <= 180

Input Format:
The first line contains the values of X, Y and Z separated by a space.

Output Format:
The first line contains either 'Valid triangle' or ' Not a valid triangle.

Example Input/Output 1:
Input:
60 60 60

Output:
Valid triangle

Example Input/Output 2:
Input:
90 0 90

Output:
Not a valid triangle
'''

#Your code below
a=input().split()
j=0
k=0
for i in range (0,3):
    if(a[i]=='0'):
        j=1
    k=k+int(a[i]) 
if(j==0 and k==180):
    print("Valid triangle")
else:
    print("Not a valid triangle")
