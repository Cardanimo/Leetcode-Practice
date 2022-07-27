class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        int n = s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        string ans = "";
        
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push({it->second,it->first});
        }
        while(!pq.empty()){
            int x = pq.top().first;
            char cx = pq.top().second;
            pq.pop();
            if(!ans.empty() && ans[ans.size()-1]==cx){
                return("");
            }
            ans.push_back(cx);
            x--;
            if(!pq.empty()){
                int y = pq.top().first;
                char cy = pq.top().second;
                pq.pop();
                ans.push_back(cy);
                y--;
                if(y!=0){
                    pq.push({y,cy});
                }
            }
            if(x!=0){
                pq.push({x,cx});
            }
        }
        return(ans);
        
    }
};