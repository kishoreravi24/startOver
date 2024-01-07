#include<bits/stdc++.h>
class Solution {
	bool isSubsequence(std::string s,std::string t){
		int n = s.length(),m=t.length();
		int j=0;
		for(int i=0;i<m and j<n;i++){
			if(s[j]==t[i]){
				j++;
			}
		}
		return(j==n);
	}
}