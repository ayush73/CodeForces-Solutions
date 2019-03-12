n,m=map(int,input().split())
a = list(map(int, input().split()))
b=list(map(int,input().split()))
res=[]
for i in a:
    mx=-(10**19)
    for j in b:
        mx=max(mx,i*j)
    res.append(mx)
    
res=sorted(res)
print(res[-2])

