class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        double ans;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
           if (nums1[i] <= nums2[j]) {
            result.push_back(nums1[i]);
            i++;
            } 
            else {
                result.push_back(nums2[j]);
                j++;
            }
        }
        while (i < nums1.size()) {
            result.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            result.push_back(nums2[j]);
            j++;
        }
        int a = result.size();
        if(a % 2 != 0){
            ans = result[a/2];
            return ans;
        }
        else{
            ans = (result[(a/2)-1]+result[a/2])/2.0;
            return ans;
        }
    
    }
};
