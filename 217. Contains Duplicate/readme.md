<div id="top"></div>

## 217. [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

### Example 1:

> Input: nums = [1,2,3,1] <br/>
> Output: true
### Example 2:

> Input: nums = [1,2,3,4] <br/>
> Output: false
### Example 3:

> Input: nums = [1,1,1,3,3,4,3,2,4,2] <br/>
> Output: true
 

### Constraints:

- $1 <= nums.length <= 105$
- $-109 <= nums[i] <= 109$

## Solution Explained ([Solution](main.cpp)):
1. **Initialization:**
   - Initialize a boolean variable `ans` to `false`. This variable will be used to track whether duplicates are found.
   - Obtain the length of the array `n`.

2. **Sorting:**
   - Sort the array `nums` in non-decreasing order using the `sort` function.

3. **Check for Duplicates:**
   - Use a for loop to iterate through the sorted array from the beginning to the second-to-last element.
   - Inside the loop:
      - Check if the current element `nums[i]` is equal to the next element `nums[i+1]`.
         - If true, set `ans` to `true` and break out of the loop since a duplicate is found.

4. **Result:**
   - Return the value of `ans`, indicating whether the array contains duplicates.

### Time Complexity
- The time complexity is O(n log n), where n is the length of the array. The dominant factor is the sorting operation.

### Space Complexity
- The space complexity is O(1) as no additional space is used based on the size of the input array.
  <p align="center">(<a href="#top">Back to top</a>)</p>
