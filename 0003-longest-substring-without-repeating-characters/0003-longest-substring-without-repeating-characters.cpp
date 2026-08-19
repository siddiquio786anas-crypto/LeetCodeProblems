class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0,j=0,l=0;
        while(j<s.size()){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            l=max(l,j-i+1);
            j++;
        }
        return l;
    }
};