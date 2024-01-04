<div id="top"></div>

## 1095. [Find in Mountain Array](https://leetcode.com/problems/find-in-mountain-array/)

(This problem is an interactive problem.)

You may recall that an array arr is a mountain array if and only if:

- $arr.length >= 3$
There exists some i with 0 < i < arr.length - 1 such that:
- $arr[0] < arr[1] < ... < arr[i - 1] < arr[i]$
- $arr[i] > arr[i + 1] > ... > arr[arr.length - 1]$
Given a mountain array mountainArr, return the minimum index such that $mountainArr.get(index) == target$. If such an index does not exist, return -1.

You cannot access the mountain array directly. You may only access the array using a MountainArray interface:

- MountainArray.get(k) returns the element of the array at index k (0-indexed).
- MountainArray.length() returns the length of the array.
Submissions making more than 100 calls to MountainArray.get will be judged Wrong Answer. Also, any solutions that attempt to circumvent the judge will result in disqualification.

 

### Example 1:

> Input: array = [1,2,3,4,5,3,1], target = 3 <br/>
> Output: 2 <br/>
> Explanation: 3 exists in the array, at index=2 and index=5. Return the minimum index, which is 2. 
### Example 2:

> Input: array = [0,1,2,4,2,1], target = 3 <br/>
> Output: -1 <br/>
> Explanation: 3 does not exist in the array, so we return -1.
 

### Constraints:

- $3 <= mountain_arr.length() <= 104$
- $0 <= target <= 109$
- $0 <= mountain_arr.get(index) <= 109$

### Solution Explained ([Solution](main.cpp)):

1. **Find Peak Index:**
   - Use a binary search to find the index of the peak element in the MountainArray.
   - Initialize two pointers, `left` and `right`, pointing to the start and end of the array.
   - While `left` is less than `right`:
      - Calculate the midpoint `mid`.
      - If the value at index `mid` is less than the value at index `mid + 1`, set `left` to `mid + 1` (indicating that the peak is on the right side).
      - Otherwise, set `right` to `mid` (indicating that the peak is on the left side).
   - The final value of `left` is the index of the peak element.

2. **Search in Increasing Part:**
   - Perform a binary search in the first increasing part of the array (from the beginning to the peak index).
   - Initialize `left` to 0 and `right` to the peak index.
   - While `left` is less than or equal to `right`:
      - Calculate the midpoint `mid`.
      - Compare the value at index `mid` with the target:
         - If equal, return `mid`.
         - If less than, update `left` to `mid + 1`.
         - If greater than, update `right` to `mid - 1`.

3. **Search in Decreasing Part:**
   - Perform a binary search in the second decreasing part of the array (from the peak index to the end).
   - Initialize `left` to the peak index and `right` to `n - 1`.
   - While `left` is less than or equal to `right`:
      - Calculate the midpoint `mid`.
      - Compare the value at index `mid` with the target:
         - If equal, return `mid`.
         - If less than, update `right` to `mid - 1`.
         - If greater than, update `left` to `mid + 1`.

4. **Result:**
   - If the target is not found in either part, return -1.

### Time Complexity
- The time complexity is $O(log n)$, where n is the length of the MountainArray. Binary search is used twice, first to find the peak index and then to search in the increasing and decreasing parts.

### Space Complexity
- The space complexity is $O(1)$ as no additional space is used based on the size of the input array.

<p align="center">(<a href="#top">Back to top</a>)</p>
