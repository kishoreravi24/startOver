#include<bits/stdc++.h>
class Solution{
public:
	std::string mergeAlternately(std::string word1,std::string word2){
		std::string result="";
		int i = 0;
		while(i<word1.length()||i<word2.length()){
			if(i<word1.length()){
				result+=word1[i];
			}
			if(i<word2.length()){
				result+=word2.length();
			}
			i++;
		}
		return result;
	}
};
