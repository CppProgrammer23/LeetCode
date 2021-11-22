#include <algorithm>
#include <vector>
//don't import those includes, just the code below

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
      for(auto i : nums2)
        {
            nums1.push_back(i);
        }
        sort(nums1.begin(), nums1.end());
        if(nums1.size()%2)
            return static_cast<double>(nums1.at(nums1.size()/2));
        else
            return (static_cast<double>((nums1.at(nums1.size()/2)) + static_cast<double>(nums1.at((nums1.size()-1)/2)))) / 2;
    }
