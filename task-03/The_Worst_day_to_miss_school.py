n=int(input())
l=list(map(int,input().split()))
l.sort()
totcars=0
a=l.count(1)
ol=[1]*a
b=l.count(2)
tl=[2]*b
c=l.count(3)
thl=[3]*c
d=l.count(4)
fl=[4]*d
totcars=totcars+d
if c>=a:
    totcars=totcars+c
else:
    a=a-c
    totcars=totcars+c
e=sum(tl)+a
if e%4==0:
    totcars=totcars+(e//4)
else:
    totcars = totcars + (e//4)+1
print(totcars)
