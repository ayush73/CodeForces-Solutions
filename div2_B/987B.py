import math
m,n= map(int, raw_input().split())
ans=m*(math.log(n))
ans1=n*(math.log(m))
ans2=ans-ans1
if(ans2>0):
    print('<')
elif(ans2<0):
    print('>')
elif(ans2==0):
    print('=')
