#include<bits/stdc++.h>
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	int a = 98;
	int b = 56;
	std::cout<<gcd(a,b);
	return 0;
}