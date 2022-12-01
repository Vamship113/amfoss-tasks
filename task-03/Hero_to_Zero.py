for i in range(int(input())):
  n=int(input())
  l=list(map(int,input().split()))
  z=l.count(0)
  if 0 in l:
    l.remove(0)
    print(n-z) 
  elif(len(set(l))==n):
    print(n+1)
  else:
    print(n)
  
