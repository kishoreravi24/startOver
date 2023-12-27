#include<bits/stdc++.h>
void sub(int ind,std::vector<int> &ds,int arr[],int n){
	if(ind>=n){
		for(auto it:ds){
			std::cout<<it<<" ";
		}
		std::cout<<std::endl;
		return;
	}
	ds.push_back(arr[ind]);
	sub(ind+1,ds,arr,n);
	ds.pop_back();
	sub(ind+1,ds,arr,n);
}
int main(){
	int arr[]={3,1,2};
	int n = 3;
	std::vector<int> ds;
	sub(0,ds,arr,n);
	return 0;
}
