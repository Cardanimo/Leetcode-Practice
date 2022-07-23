class Solution {
public:
    int longestValidParentheses(string s) {
        int n;
        n=s.size();
        if(n<2)
            return 0;
        stack<char> st;
        stack<int> index;
        index.push(-1);
        int length=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
                index.push(i);
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    index.pop();
                    length=max(length,i-index.top());
                    
                }
                else
                    index.push(i);
            }
        }
        return length;
        
    }
};