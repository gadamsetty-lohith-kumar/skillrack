'''
Reversed Words in Even Positions

Given a string S as the input with two or more words in it, the program must reverse the order of the words in S. Then the program must reverse each word in the even positions. The resulting words in the modified order must be printed as the output.

Boundary Condition(s):
10 <= Length of S <= 1000

Input Format:
The first line contains the string with two or more words separated by space(s).

Output Format:
The first line contains the reversed string with words in the even position reversed.

Example Input/Output 1:
Input:
one two three four

Output:
four eerht two eno

Example Input/Output 2:
Input:
one two three four five

Output:
five ruof three owt one
'''


#Your code below
a=input().split()
l=len(a)
k=0
for i in range (l-1,-1,-1):
    if(k%2==0):
        print(a[i],end=" ")
    else:
        print("".join(reversed(a[i])),end=" ")
    k=k+1    
