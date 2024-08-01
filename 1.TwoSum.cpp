#include <vector>
//solution using Bruteforce
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};


//solution using the 2pointer method

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        int n= nums.size();
        vector<int> nums2(nums);
        sort(nums2.begin(),nums2.end());
        for (int i=0; i<n;i++){
            if((nums2[high]+ nums2[low])==target) break;
            else if((nums2[high]+ nums2[low])>target) high--;
            else{ low++;}
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]==nums2[low]) v.push_back(i);
            else if(nums[i]==nums2[high]) v.push_back(i);
        }
        return v;
    }
};