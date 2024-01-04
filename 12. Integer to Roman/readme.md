<div id="top"></div>

## 12. [Intger to Roman](https://leetcode.com/problems/integer-to-roman/)

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

| Symbol | Value |
| :---: | :---: |
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 | 
| D | 500 |
| M | 1000 |


For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

- I can be placed before V (5) and X (10) to make 4 and 9. 
- X can be placed before L (50) and C (100) to make 40 and 90. 
- C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

 

### Example 1:

> Input: num = 3 <br/>
> Output: "III" <br/>
> Explanation: 3 is represented as 3 ones.
### Example 2:

> Input: num = 58 <br/>
> Output: "LVIII" <br/>
> Explanation: L = 50, V = 5, III = 3.
### Example 3:

> Input: num = 1994 <br/>
> Output: "MCMXCIV" <br/>
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

### Constraints:

- $1 <= num <= 3999$

### Solution Explained ([Solution](main.cpp)):

1. **Initialization:**
   - Initialize an empty string `roman` to store the Roman numeral representation of the given integer.

2. **Mapping:**
   - Create two arrays, `symbols` and `values`, to represent the mapping of Roman numeral symbols to their corresponding integer values.
   - The arrays are arranged in descending order of values to facilitate a greedy approach.

3. **Greedy Approach:**
   - Iterate through the mapping arrays using a for loop.
   - In each iteration:
      - Check if the current integer value (`values[i]`) can be subtracted from the given number (`num`) without making it negative.
      - If so, append the corresponding Roman symbol (`symbols[i]`) to the `roman` string.
      - Subtract the value from the given number.

4. **Result:**
   - The final `roman` string contains the Roman numeral representation of the original integer.

### Time Complexity
- The time complexity of this solution is O(1) since the loop iterates a fixed number of times (13 iterations) regardless of the input value.

### Space Complexity
- The space complexity is O(1) as no additional space is used based on the size of the input.

<p align="center">(<a href="#top">Back to top</a>)</p>
