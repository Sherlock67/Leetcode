class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)     {
        
    vector<int>v;
    int l = 0,k = 0;
    while(l<m){
      v.push_back(nums1[l]);
      l++;
    }
    while(k<n){
      v.push_back(nums2[k]);
      k++;
    }
    
    for(int i = 0;i<m+n;i++){
        nums1[i] = v[i];
    }
        sort(nums1.begin(), nums1.end());
    
    }
};
