<div id="top"></div>

## 167. [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index<sub>1</sub>] and numbers[index<sub>2</sub>] where 1 <= index<sub>1</sub> < index<sub>2</sub> <= numbers.length.

Return the indices of the two numbers, index<sub>1</sub> and index<sub>2</sub>, added by one as an integer array [index<sub>1</sub>, index<sub>2</sub>] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

 

### Example 1:

> Input: numbers = [2,7,11,15], target = 9<br/>
> Output: [1,2]<br/>
> Explanation: The sum of 2 and 7 is 9. Therefore, index<sub>1</sub> = 1, index<sub>2</sub> = 2. We return [1, 2].
### Example 2:

> Input: numbers = [2,3,4], target = 6<br/>
> Output: [1,3]<br/>
> Explanation: The sum of 2 and 4 is 6. Therefore index<sub>1</sub> = 1, index<sub>2</sub> = 3. We return [1, 3].
### Example 3:

> Input: numbers = [-1,0], target = -1<br/>
> Output: [1,2]<br/>
> Explanation: The sum of -1 and 0 is -1. Therefore index<sub>1</sub> = 1, index<sub>2</sub> = 2. We return [1, 2].
 

### Constraints:

- $2 <= numbers.length <= 3 * 104$
- $-1000 <= numbers[i] <= 1000$
- numbers is sorted in non-decreasing order.
- $-1000 <= target <= 1000$
- The tests are generated such that there is exactly one solution.


### Solution Explained ([Solution](main.cpp)):

1. **Initialization:**
   - Initialize two pointers, `l` and `r`, pointing to the start and end of the array, respectively.
   - Initialize an empty vector `ans` to store the result.

2. **Two Pointer Technique:**
   - Use a while loop that continues as long as `l` is less than or equal to `r`.
   - Inside the loop:
      - Calculate the sum of the elements at indices `l` and `r` in the array.
      - If the sum is equal to the target:
         - Push the indices (1-based) of the two numbers into the `ans` vector.
         - Return the result.
      - If the sum is greater than the target:
         - Decrement the `r` pointer to explore smaller values.
      - If the sum is less than the target:
         - Increment the `l` pointer to explore larger values.

3. **Result:**
   - If the loop exits without finding a valid pair, return an empty vector `ans` to indicate that no such pair was found.

### Time Complexity
- The time complexity of this solution is O(n), where n is the number of elements in the input array. The algorithm traverses the array once using two pointers.

### Space Complexity
- The space complexity is O(1) as no extra space is used, except for the result vector.

<p align="center">(<a href="#top">Back to top</a>)</p>
