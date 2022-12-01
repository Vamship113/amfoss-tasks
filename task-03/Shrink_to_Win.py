n=input()
c=0
while(len(n)>1):
  sum=0
  for i in range(len(n)):
      sum+= (ord(n[ i ]) - ord('0'))
  n=str(sum)
  c+=1
print(c)
