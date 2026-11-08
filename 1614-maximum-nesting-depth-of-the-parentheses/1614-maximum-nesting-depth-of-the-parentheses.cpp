class Solution {
public:
    int maxDepth(string s) {
        int depth=0,maxdepth=0;
        for(char ch :s){
            if(ch=='('){
                depth++;
                maxdepth=max(depth,maxdepth);
            }
            if(ch==')'){
                depth--;
            }
        }
        return maxdepth;
    }
};