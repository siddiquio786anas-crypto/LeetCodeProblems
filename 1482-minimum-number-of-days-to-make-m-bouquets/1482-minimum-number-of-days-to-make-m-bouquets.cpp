class Solution {
public:
    bool canmake(vector<int>& bloomDay, int m, int k,int day){
        int b=0;
        int c=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                c++;
            }else{
                c=0;
            }
            if(c==k){
                b++;
                c=0;
            }
            if(b>=m)
                return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans=-1;
        long long n=1LL*m*k;
        if(n>bloomDay.size())
            return -1;
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        while(l<=h){
        int mid = l + (h-l)/2;
        if(canmake(bloomDay,m,k,mid)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
    }
};