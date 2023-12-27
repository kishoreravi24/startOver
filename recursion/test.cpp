#include<bits/stdc++.h>
void call(int a){
	if(a>3){
		return;
	}
	std::cout<<a<<"\n";
	call(++a);
}
int main(){
	std::cout<<"Test recursion program";
	int a;
	std::cin>>a;
	call(a);
	return 0;
}
