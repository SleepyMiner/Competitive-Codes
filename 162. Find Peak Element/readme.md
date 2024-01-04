<div id="top"></div>

## 162. [Find Peak Element](https://leetcode.com/problems/find-peak-element/)

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that $nums[-1] = nums[n] = -∞$. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in $O(log n)$ time.

 

### Example 1:
> Input: nums = [1,2,3,1] <br/>
> Output: 2 <br/>
> Explanation: 3 is a peak element and your function should return the index number 2.
### Example 2:

> Input: nums = [1,2,1,3,5,6,4] <br/>
> Output: 5 <br/>
> Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6. <br/>
 

### Constraints:

- $1 <= nums.length <= 1000$
- $-231 <= nums[i] <= 231 - 1$
- $nums[i] != nums[i + 1] for all valid i$.

## Solution Explained ([Solution](main.cpp)):
1. **Initialization:**
   - Initialize two pointers `l` and `r` pointing to the start and end of the array, respectively.
   - Calculate the initial value of `mid` as the midpoint of the array.

2. **Binary Search:**
   - Use a while loop that continues as long as `l` is less than `r`.
   - Inside the loop:
      - Check if the element at index `mid` is less than the element at index `mid+1`.
         - If true, it means the peak element must be on the right side of `mid`, so update `l` to `mid + 1`.
         - Otherwise, update `r` to `mid` as the peak element must be on the left side of `mid`.

3. **Result:**
   - When the loop exits, the value of `l` represents the index of the peak element.

### Time Complexity
- The time complexity of this solution is O(log n), where n is the size of the input array. The binary search halves the search space in each iteration.

### Space Complexity
- The space complexity is O(1) as no additional space is used based on the size of the input array.
  <p align="center">(<a href="#top">Back to top</a>)</p>
