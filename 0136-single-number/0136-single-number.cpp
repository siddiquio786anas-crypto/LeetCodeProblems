class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> hs;
        for(int i=0;i<nums.size();i++){
            if(hs.find(nums[i])!= hs.end()){
            
                hs.erase(nums[i]);
            }
            else{
                 hs.insert(nums[i]);
            }
        }
        return *hs.begin();
    
    }
};