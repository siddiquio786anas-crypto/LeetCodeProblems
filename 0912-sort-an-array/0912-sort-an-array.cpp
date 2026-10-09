class Solution {
public:
    void mergesort(vector<int>&arr,int s,int e){
        if(s==e)return;
        int mid=s+(e-s)/2;
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }
    void merge(vector<int>& arr,int s,int mid,int e){
        vector<int>temp(e-s+1);
        int l=s,r=mid+1,i=0;
        while(l<=mid && r<=e){
            if(arr[l]<=arr[r]){
                temp[i]=arr[l];
                i++,l++;
            }
            else{
                temp[i]=arr[r];
                i++,r++;
            }
        }
        while(l<=mid){
            temp[i]=arr[l];
            i++,l++;
        }
        while(r<=e){
            temp[i]=arr[r];
            i++,r++;
        }
            i=0;
        while(s<=e){
            arr[s]=temp[i];
            s++,i++;
        } 
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
    
};