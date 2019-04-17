'''
Find and Replace

The program must accept three string values S1, S2 and S3 as the input. The program must find all occurrences of the string S1 in the string S3 and replace all the occurrences of the string S1 by the string S2. Finally, the program must print the modified string S3 as the output.
Note: String values are only in lower case
Hint: Use strcmp() in-built function

Boundary Condition(s):
1 <= Length of S1, S2 <= 20
1 <= Length of S3 <= 1000

Example Input/Output 1:
Input:
tiger lion
the tiger is a wild animal the tiger is known as the king of the jungle

Output:
the lion is a wild animal the lion is known as the king of the jungle

Example Input/Output 2:
Input:
abcd xyz
bcd abc abcd cde abcde abcd asdf bcde

Output:
bcd abc xyz cde abcde xyz asdf bcde
'''


#Your code below
a=input().split()
b=input().split()
l=len(b)
for i in range(0,l):
    if(b[i]==a[0]):
        print(a[1],end=" ")
    else:    
        print(b[i],end=" ")
