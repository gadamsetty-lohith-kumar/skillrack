#Your code below
i=input().split()
for j in range (0,2):
    m=int(i[j])
    n=int(i[j+1])
    if(m<n):
        m,n=n,m
    l=m
    for k in range (n,m+1):
        print(l,end="")
        l=l-1
