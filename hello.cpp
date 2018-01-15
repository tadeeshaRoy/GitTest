class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size(),s=l-1,i=0,a,b;
        vector<int> result;
        while(i<l)
        {
            if(nums[i]+nums[s]==target)
            {
                result.push_back(s);
                result.push_back(i);
                break;
            }
            else if((nums[i]+nums[s])<target)
                i++;
            else    s--;
        }
        return result;
    }
};
