'''
Vowels and Consonants

The program must a string S as the input. The program must print all the vowels in the string followed by all the consonants in the string as the output.

Boundary Condition(s):
1 <= Length of S <= 200

Example Input/Output 1:
Input:
elephant

Output:
eealphnt

Explanation:
Here the vowels are "eea" and the consonants are "lphnt"
Hence the output is "eealphnt".

Example Input/Output 2:
Input:
HETEROGENEOUS 

Output:
EEOEEOUHTRGNS
'''

#Your code below
a=list(input())
l=len(a)
for i in range (0,l):
    if a[i] in 'aeiouAEIOU':
        print(a[i],end="")
for i in range (0,l):
    if a[i] not in 'aeiouAEIOU':
        print (a[i],end="")
        
        
        
        
