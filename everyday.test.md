// 217. 存在重复元素
// 给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
解法1：
、、、
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hxb;
        for(int i=0;i<nums.size();i++)
        {
            hxb[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(hxb[nums[i]]>1) {
                return true;
            }
        }
        return false;
    }
};
、、、
