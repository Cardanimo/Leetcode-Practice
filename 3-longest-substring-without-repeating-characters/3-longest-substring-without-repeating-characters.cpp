class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int size=s.size();
        int j=0;
        int start=0;
        int mx=0;
        
        if(size==1)
            return 1;
        while(j<size)
        {
            if(mp.find(s[j])!=mp.end())
            {
                start=max(start,mp[s[j]]+1);
                mp[s[j]]=j;
            }
            else
            {
                mp[s[j]]=j;
            }
            j++;
            mx=max(mx,j-start);
        }
        return mx;
    }
};