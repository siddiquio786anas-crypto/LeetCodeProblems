class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>zig(numRows);
        int row=0;
        int direction =1;
        if(numRows==1 || numRows>=s.length())
            return s;
        for(char ch:s){
            zig[row].push_back(ch);
            if(row==0){
                direction=1;
            }
            if(row==numRows-1)
                direction=-1;
            row+=direction;
        }
        string ans="";
        for(int i=0;i<zig.size();i++){
            ans+=zig[i];
        }
        return ans;
    }
};