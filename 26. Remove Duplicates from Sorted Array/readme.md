<div id="top"></div>

## 26. [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

- Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
- Return k.
Custom Judge:

The judge will test your solution with the following code:

> int[] nums = [...]; // Input arra <br/>
> int[] expectedNums = [...]; // The expected answer with correct length<br/>
> int k = removeDuplicates(nums); // Calls your implementation<br/>
> assert k == expectedNums.length;<br/>
> for (int i = 0; i < k; i++) {<br/>
>    assert nums[i] == expectedNums[i];<br/>
> }
If all assertions pass, then your solution will be accepted.

 

### Example 1:

> Input: nums = [1,1,2] <br/>
> Output: 2, nums = [1,2,_] <br/>
> Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
### Example 2:

> Input: nums = [0,0,1,1,1,2,2,3,3,4] <br/>
> Output: 5, nums = [0,1,2,3,4,_,_,_,_,_] <br/>
> Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

### Constraints:

- $1 <= nums.length <= 3 * 104$
- $-100 <= nums[i] <= 100$
- nums is sorted in non-decreasing order.

## Solution Explained ([Solution](main.cpp)):
1. **Empty Check:**
   - Check if the input array `nums` is empty.
   - If empty, return 0, as there are no elements to process.

2. **Pointer Initialization:**
   - Initialize an integer variable `k` to 1. This variable represents the pointer to the next position to insert a unique element in the modified array.

3. **Iterative Removal of Duplicates:**
   - Use a for loop starting from index 1 to iterate through the array `nums`.
   - Inside the loop:
      - Check if the current element `nums[i]` is different from the previous element `nums[i - 1]`.
         - If true, update the element at position `k` in the array to be the current unique element `nums[i]`.
         - Increment the pointer `k` to the next position.

4. **Result:**
   - The final value of `k` represents the new length of the array without duplicates.

### Time Complexity
- The time complexity is $O(n)$, where n is the length of the input array. The algorithm iterates through the array once.

### Space Complexity
- The space complexity is $O(1)$ as the modifications are made in-place and no additional space is used based on the size of the input array.
  <p align="center">(<a href="#top">Back to top</a>)</p>
