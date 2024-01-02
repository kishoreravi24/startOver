#include<bits/stdc++.h>
class Solution{
	std::string gcdOfStrings(std::string str1,std::string str2){
		if(str1+str2!=str2+str1){
			return "";
		}else{
			return str1.substr(0,std::gcd(str1.length(),str2.length()));
		}
	}
}

// without gcd lib

int findgcd(int len1,int len2){
	int min = std::min(len1,len2);
	while(min!=0){
		if(len1%min==0&&len2%min==0){
			return min;
		}
		min--;
	}
	return 0;
}
std::string gcdOfStrings(std::string s1,std::string s2){
	if(s1+s2!=s2+s1){
		return "";
	}else{
		return s1.substr(0,findgcd(s1.length(),s2.length()));
	}
}