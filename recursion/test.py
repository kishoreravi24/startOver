#!/usr/bin/python3
def call(a):
    if a>=3:
        return
    print(a)
    call(a+1)
a = int(input())
call(a)

#or in lambda
num = range(1,a)
lam = map(lambda x:x+1 if x%2==0 else x,num)
print(list(lam))

