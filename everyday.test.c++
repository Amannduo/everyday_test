// 217. 存在重复元素
// 给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。
// 解法1：利用unordered_map计数，通过判断计数>1来做。
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
//解法2：通过set的查询，如果在存的时候，已经存在了，那就是有了。
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hxb;
       for(int x: nums)
       {
        if(hxb.find(x)!=hxb.end())
        {
            return true;
        }
        hxb.insert(x);
       }
       return false;
    }
};
//解法3：通过.reserve()先预留位置，再通过插入时的hxb.insert(x).second(bool类型）直接判断。
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hxb;
        hxb.reserve(nums.size());
        for(auto x: nums)
        {
            if(!hxb.insert(x).second) return true;
        }
        return false;
    }
};
