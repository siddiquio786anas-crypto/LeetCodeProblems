class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int i=num1.length()-1;
        int j=num2.length()-1;
        int c=0;
        while(i>=0 || j>=0 || c>0){
            int sum=0;
            if(i>=0){
                sum+=num1[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=num2[j]-'0';
                j--;
            }
            sum+=c;
            int ld=sum%10;
            char ldc=ld+'0';
            ans.push_back(ldc);
            c=sum/10;
        }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};