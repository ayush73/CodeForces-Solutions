h,a,c=map(int,input().split())
h2,a2=map(int,input().split())
count=1
s=[]
while(h2>a):
    count+=1
    if(h>a2):
        s.append('STRIKE')
        h2=h2-a
    else:
        h+=c
        s.append('HEAL')
    h-=a2
s.append('STRIKE')
print(count)
for i in (s):
    print(i)