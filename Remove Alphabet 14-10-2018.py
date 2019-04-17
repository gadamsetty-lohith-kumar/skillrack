'''
Remove Alphabet

The program must accept two alphabets CH1 and CH2 as the input. The program must print the output based on the following conditions.
- If CH1 is either 'U' or 'u' then print all the uppercase alphabets except CH2.
- If CH1 is either 'L' or 'l' then print all the lowercase alphabets except CH2.
- For any other values of CH1 then print INVALID.

Example Input/Output 1:
Input:
U v

Output:
A B C D E F G H I J K L M N O P Q R S T U W X Y Z

Example Input/Output 2:
Input:
L C

Output:
a b d e f g h i j k l m n o p q r s t u v w x y z

'''


#Your code below
l=input().split()
if l[0] in ('UuLl'):
    if l[0]=='U' or l[0]=='u':
        s='A'
        l[1]=l[1].upper()
    elif l[0]=='L' or l[0]=='l':
        s='a'
        l[1]=l[1].lower()
    for i in range (0,26):
        if s!=l[1]:
            print(s,end=" ")
        s=chr(ord(s)+1)
else:
    print("INVALID")
