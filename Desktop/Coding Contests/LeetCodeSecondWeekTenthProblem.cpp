class Solution {
public:
    int num= 0 ; 
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=0 ; i<nums.size() ; i++){
            num = num^nums[i]; 
        }
        return num ; 
    }
};