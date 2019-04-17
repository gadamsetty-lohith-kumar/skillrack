'''
Escape Speed

The program must accept three floating point values as G (gravitational constant), M(mass) and r(radius) of a planet. 
The program must calculate and print the escape speed of the object with precision up to 3 decimal places.

Formula: square root(2gm)/r)

Example Input/Output 1:
Input:
1.567 2.4783 3.4671

Output:
1.497

Example Input/Output 2:
Input:
1.9038 2.7920 4.3937

Output:
1.555
'''

#Your code below
import math
a=(input().split())
g=float(a[0])
m=float(a[1])
r=float(a[2])
l=math.sqrt((2*g*m)/r)
print ("%.2f"%l)

'''
  or

import math
a=(input().split())
g=math.sqrt(((2*float(a[0])*float(a[1]))/float(a[2])))
print ("%.3f"%g)

'''
