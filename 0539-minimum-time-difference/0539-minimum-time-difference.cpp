class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>time;
        for(string s:timePoints){
            int hr=stoi(s.substr(0,2));
            int min=stoi(s.substr(3,2));
            time.push_back(hr*60+min);
        }
        sort(time.begin(),time.end());
        int ans=INT_MAX;
        for(int i=1;i<time.size();i++){
            ans=min(ans,time[i]-time[i-1]);
        }
        ans=min(ans,1440-time.back()+time.front());
        return ans;
    }
};