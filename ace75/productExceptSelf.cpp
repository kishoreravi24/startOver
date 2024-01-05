class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> res;
        int product = 1;
        for(int i=0;i<nums.size();i++){
            product = 1;
            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                product*=nums[j];
            }
            res.push_back(product);
        }
        return res;
    }
};