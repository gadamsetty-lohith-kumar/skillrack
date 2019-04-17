/*
IPv4 Address Validity

Given an IPv4 address as a string, check if the address is valid. Print Valid if the address is valid else print Invalid. IPv4 address has 4 blocks of 8 bit (unsigned) numbers ranging from 0 to 255 separated by a . (dot).

Boundary Condition(s):
1 <= Length of address <= 50

Input Format:
The first line contains the IP address.

Output Format:
The first line contains Valid or Invalid.

Example Input/Output 1:
Input:
127.0.0.1

Output:
Valid

Example Input/Output 2:
Input:
266.2.9.34.12

Output:
Invalid

Explanation:
As 266 is present in the IP address
*/

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc=new Scanner(System.in);
		String[] a=new String[10];
		int i,j=0,k=0;
		String s=sc.nextLine();
	    a=s.split("[.]");
	    j=0;
		for(i=0;i<a.length;i++)
		{
		    try
		    {
		    j=Integer.parseInt(a[i]);
		    }
		    catch(NumberFormatException e)
		    {
		        break;
		    }
		  if(j<=255&&j>=0&&a.length<=4)
		  k++;

		}
if(k==4)
System.out.print("Valid");
else
System.out.print("Invalid");
	}
}

