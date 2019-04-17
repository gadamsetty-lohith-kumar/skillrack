/*
Same Characters in Zigzag Matrix
Accept a matrix of size NxN containing only characters as input. The program must print the characters which are in the same positions in
the forward and the reverse zig-zag traversal. If there is no character in the same position in such traversal then print -1 as the output.

Boundary Condition(s):
2 <= N <= 20

Input Format:
The first line contains the value of N.
The next N lines contain N characters separated by space.

Output Format:
The first line contains the characters which are in the same positions in the forward and the reverse zig-zag traversal separated by space(s) or -1.

Example Input/ Output 1:
Input:
5
a b c d e
f g h i j
k l m n o
f g h i j
k r c f a

Output:
a c h m

Explanation:
In the forward traversal, the matrix contains a, b, c, d, e, j, i, h, g, f, k, l, m, n, o, j, i, h, g, f, k, r, c, f and a.
In the reverse traversal, the matrix contains a, f,  c, r,  k, f, g, h, i, j, o, n, m, l, k, f, g, h, i, j, e, d, c, b and a.
While traversing in the forward and reverse direction, the characters in the same positions are a, c, h and m as highlighted in blue color.

Example Input/ Output 2:
Input:
6
m o h n g i
t s v u h r
g l m n n o
o c b d f g
r h v v s t
o g i g f e

Output:
g r h v s t g o

Example Input/ Output 3:
Input:
4
a b c d
f g h i
k l m n
f g h i

Output:
-1
*/


/*
      printing input and intermediate outputs

#include <iostream>

using namespace std;

int  main()
{
int i,j,k=0,l=0,m,n,o=0,p=0,s=0;
char a[20][20];
cin>>n;
p=n/2;
if(n%2==0)
    p--;
cout<<p<<"\n";
for(i=0;i<n;i++)
{
    if((n%2==0&&i%2==1)||(n%2==1&&((i<p&&(i%2==1))||(i>p&&(i%2==0)))))
    j=n-1;
    else
    j=0;
    for(k=0;k<n;k++)
    {
        cin>>a[i][j];
        cout<<a[i][j]<<" ";
        if((n%2==0&&i%2==1)||(n%2==1&&((i<p&&(i%2==1))||(i>p&&(i%2==0)))))
        j--;
        else
        j++;

    }
    cout<<"\n";
}
cout<<"\n";
for(i=0;i<n;i++)
{

    for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
    cout<<"\n";
}
k=(n*n)/2;
if(n*n%2==1)
k++;
l=n;
cout<< k<<" ";
for(i=0;i<n;i++)
{   l--;
    if(n%2==1&&n/2==i)
    m=n-1;
    else
    m=0;
    for(j=0;j<n;j++)
    {
        if(a[i][j]==a[l][m])
        {
        cout<<a[i][j]<<" ";
        s++;
        }
        o++;
        if(o==k)
        {
            if(s==0)
                cout<<"-1";
        return 0;
        }
        if(n%2==1&&n/2==i)
        m--;
        else
        m++;
    }
}
}
*/


#include <iostream>

using namespace std;

int  main()
{
int i,j,k=0,l=0,m,n,o=0,p=0,s=0;
char a[20][20];
cin>>n;
p=n/2;
if(n%2==0)
p--;
for(i=0;i<n;i++)
{
    if((n%2==0&&i%2==1)||(n%2==1&&((i<p&&i%2==1)||(i>p&&i%2==0))))
    j=n-1;
    else
    j=0;
    for(k=0;k<n;k++)
    {
        cin>>a[i][j];
        if((n%2==0&&i%2==1)||(n%2==1&&((i<p&&i%2==1)||(i>p&&i%2==0))))
        j--;
        else
        j++;
    }
}
k=(n*n)/2;
if(n*n%2==1)
k++;
l=n;
for(i=0;i<n;i++)
{   l--;
    if(n%2==1&&n/2==i)
    m=n-1;
    else
    m=0;
    for(j=0;j<n;j++)
    {
        if(a[i][j]==a[l][m])
        {
        cout<<a[i][j]<<" ";
        s++;
        }
        o++;
        if(o==k)
        {
            if(s==0)
            cout<<"-1";
        return 0;
        }
        if(n%2==1&&n/2==i)
        m--;
        else
        m++;
    }
}
}

