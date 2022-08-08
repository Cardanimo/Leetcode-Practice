class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==0){
            return "";
        }
        int srt=0,end=0;
        for(int i=0;i<s.length();i++){
            int len1=expfrmMid(s,i,i);
            int len2=expfrmMid(s,i,i+1);
            int len=max(len1,len2);
        
        if(len>end-srt+1){
                srt=i-((len-1)/2);
                end=i+(len/2);
            }
        
         
        
    }
        return s.substr(srt,end-srt+1); 
}
    int expfrmMid(string s,int lft,int rght){
        if(s.length()==0 || lft>rght){
            return 0;
        }
        while(lft>=0  && rght < s.length() )
        {   
            if(s[lft]!=s[rght])
        {     
            break;
        }
         
            lft--;
            rght++;
        }
        return rght-lft-1;
    }
};