class Solution {
public:
    vector<int> mergearrays(vector<int>& nums1, vector<int>& nums2){
        vector<int>nums3;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if( nums1[i] <= nums2[j] ){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size()){
            nums3.push_back(nums2[j]);
            j++;
        }
        return nums3;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>final = mergearrays(nums1,nums2);
        int m = final.size();
        if(m % 2 != 0){
            double ans = (m-1)/2;
            return final[ans];
        }
        else{
            int ans1 = final[(m-1)/2];
            int ans2 = final[((m-1)/2)+1];
            double result = (ans1+ans2)/2.0;
            return result;
        }
    }
};