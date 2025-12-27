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
// 242. 有效的字母异位词
// 给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的 字母异位词。
// 示例 1:
// 输入: s = "anagram", t = "nagaram"
// 输出: true
// 示例 2:
// 输入: s = "rat", t = "car"
// 输出: false
// 提示:
// 1 <= s.length, t.length <= 5 * 104
// s 和 t 仅包含小写字母
// 进阶: 如果输入字符串包含 unicode 字符怎么办？你能否调整你的解法来应对这种情况？
// 解答1： 通过排序进行逐个字符比较。
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end(),[](auto &a ,auto &b)
        {
            return a>b;
        });
        sort(t.begin(),t.end(),[](auto &a ,auto &b)
        {
            return a>b;
        });
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            return false;
        }
        return true;
    }
};
//解答2；利用unordered计数，其实也可以直接用vector<int>进行计数,这里的索引也就是s[i]-'a'
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> res1;
        res1.reserve(s.size());
        for(int i=0;i<s.size();i++)
        {
            res1[s[i]]++;
        }
        for(auto c:t)
        if(--res1[c]<0) return false;
        return true;
    }
};
