#include<bits/stdc++.h>
class Solution {
public:
	void solve(int ind,std::vector<int> list,int target,std::vector<int> &helper,std::vector<std::vector<int>> &result) {
		if(target==0){
			result.push_back(helper);
			return;
		}

		if(ind==list.size()||target<0){
			return;
		}

		helper.push_back(list[ind]);
		solve(ind,list,target-list[ind],helper,result);
		helper.pop_back();
		solve(ind+1,list,target-list[ind],helper,result);
		return;
	}
	std::vector<std::vector<int>> combinationSum(std::vector<int> &list, int target) {
		std::vector<std::vector<int>> result;
		std::vector<int> helper;
		solve(0,list,target,helper,result)
	}
};