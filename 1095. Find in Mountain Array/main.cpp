/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */
#include<bits/stdc++.h>

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
    
    // Step 1: Find the peak index
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    int peakIndex = left;
    
    // Step 2: Search in the first increasing part of the array
    left = 0;
    right = peakIndex;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = mountainArr.get(mid);
        if (midValue == target) {
            return mid;
        } else if (midValue < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    // Step 3: Search in the second decreasing part of the array
    left = peakIndex;
    right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = mountainArr.get(mid);
        if (midValue == target) {
            return mid;
        } else if (midValue < target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return -1;
    }
};