<div id="top"></div>

## 1. [Two Sum](https://leetcode.com/problems/two-sum/)

Given an array of integers ```nums``` and an integer ```target```, return indices of the two numbers such that they add up to ```target```.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

### Example 1:

> Input: nums = [2,7,11,15], target = 9<br/>
> Output: [0,1] <br/>
> Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
### Example 2:

> Input: nums = [3,2,4], target = 6 <br/>
> Output: [1,2]
### Example 3:

> Input: nums = [3,3], target = 6 <br/>
> Output: [0,1]
 

Constraints:

- $2 <= nums.length <= 104$
- $-109 <= nums[i] <= 109$
- $-109 <= target <= 109$
- Only one valid answer exists.

## Solution Explained ([Solution](main.cpp)):
1. Class and Function:

- A class named Solution is defined with a public function twoSum.
- twoSum takes a vector of integers (nums) and an integer (target) as input.
- It returns a vector of integers containing the indices of the two numbers that add up to the target.</li>
2. Using a Hash Map:

- An unordered map named numIndexMap is created to store numbers as keys and their indices as values.</li>
3. Iterating through the Array:

- The code iterates through each number in the nums vector:
  - For each number (nums[i]):
    - It calculates the complement: complement = target - nums[i].
    - It checks if the complement exists in the numIndexMap:
       - If it does, it means the pair that adds up to the target is found. It returns a vector containing the index of the complement from the map and the current index i.
    - If the complement is not found, it adds the current number and its index to the numIndexMap for potential future matches.
  
4. Handling No Solution:

- If the loop completes without finding a pair, it means there's no solution. It returns an empty vector.
### Key Points:

- The use of a hash map enables efficient lookups with an average time complexity of O(1).
- The algorithm achieves a time complexity of O(n) and a space complexity of O(n) due to the hash map.
  <p align="center">(<a href="#top">Back to top</a>)</p>
