#include<bits/stdc++.h>

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size() - 1;
        int mid = l + (r - l)/2;
        while(l < r)
        {
            if(arr[mid] < arr[mid+1])
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
            mid = l + (r - l)/2;
        }
        return l;
    }
};