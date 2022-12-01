d={}
l=[]
w,n=map(int,input().split())
for i in range(n):
  a,b=input().split()
  d[a]=b
s=input().split()
for i in s:
  for x in d:
    if(i==x or i==d[x]):
      if(len(x)<=len(d[x])):
        l.append(x)
      else:
        l.append(d[x])
print(*l)



