#include<bits/stdc++.h>
int main(){
	std::string vowels = "aeiouAEIOU";
	std::string s="hello";
	int left=0,right=s.length()-1;
	while(left<right){
		while(left<right && vowels.find(s[left])==std::string::npos){
			left++;
		}
		while(left<right && vowels.find(s[right])==std::string::npos){
			right--;
		}
		if(left<right){
			std::swap(s[left],s[right]);
			left++;
			right--;
		}
	}
	std::cout<<s<<" ";
	return 0;
}
