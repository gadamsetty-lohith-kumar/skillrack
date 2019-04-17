'''
Longest Word

The program must accept a string S as the input. The program print the longest word from the string S as the output.
 If two or more longest words are of same length then consider the first one.

Boundary Condition(s):
1 <= Length of S <= 1000

Example Input/Output 1:
Input:
Good Morning

Output:
Morning
    
Explanation:
The length of the word "Good" is 4 and the length of the "Morning" is 7
Hence Morning is printed as the output.

Example Input/Output 2:
Input:
good time

Output:
good

'''


a=input()
n=(a.split())
o=(len(n))
ma=len(n[0])
p=0
for i in range (1,o):
    m=len(n[i])
    if(ma<m):
        ma=m
        p=i
print (n[p])

'''
if we need to print last word if both words or of same length


a=input()
print(max(a.split()))


'''
