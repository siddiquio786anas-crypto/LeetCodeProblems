class Solution {
public:
    static bool mycmp(string a,string b){
        string t1=a+b;
        string t2=b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>snum;
        for(int i=0;i<nums.size();i++){
            snum.push_back(to_string(nums[i]));
        }
        sort(snum.begin(),snum.end(),mycmp);
        if(snum[0]=="0") return "0";
        string ans="";
        for(int i=0;i<nums.size();i++){
            ans+=snum[i];
        }
        return ans;
    }
};