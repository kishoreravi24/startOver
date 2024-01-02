#!/usr/bin/python
def gcd(a:int,b:int)->None:
	while b!=0:
		a,b=b,a%b
	return a
a=98
b=56
print(gcd(a,b))
