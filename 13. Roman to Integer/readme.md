<div id="top"></div>

## 13. [Roman to Integer](https://leetcode.com/problems/roman-to-integer/)
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

|Symbol|Value|
| :---:| :---: |
|I|1|
|V|5|
|X|10|
|L|50|
|C|100|
|D|500|
|M|1000|

For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

- I can be placed before V (5) and X (10) to make 4 and 9. 
- X can be placed before L (50) and C (100) to make 40 and 90. 
- C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

### Example 1:

> Input: s = "III" <br/>
> Output: 3 <br/>
> Explanation: III = 3.
### Example 2:

> Input: s = "LVIII" <br/>
> Output: 58 <br/>
> Explanation: L = 50, V= 5, III = 3.
### Example 3:

> Input: s = "MCMXCIV" <br/>
> Output: 1994 <br/>
> Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

### Constraints:

- $1 <= s.length <= 15$
- s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
- It is guaranteed that s is a valid roman numeral in the range $[1, 3999]$.

### Solution Explained ([Solution](main.cpp))

1. **Mapping:**
   - Create an unordered map `romanValues` to store the mapping of Roman numerals to their corresponding integer values.

2. **Result Initialization:**
   - Initialize an integer variable `result` to store the final converted value. Set it to 0 initially.

3. **Iterative Conversion:**
   - Iterate through each character in the input string `s` using a for loop.
   - For each character:
      - Check if it is the last character (`i < s.length() - 1`) and if its value is less than the value of the next character.
      - If true, subtract the current Roman numeral's value from the result (`result -= romanValues[s[i]]`), as it represents a subtractive combination.
      - Otherwise, add the value of the Roman numeral to the result (`result += romanValues[s[i]]`).

4. **Result:**
   - The final value of `result` represents the integer equivalent of the input Roman numeral.

### Time Complexity
- The time complexity of this solution is O(n), where n is the length of the input string `s`. The algorithm iterates through each character once.

### Space Complexity
- The space complexity is O(1) as the space used is constant, independent of the input size.

<p align="center">(<a href="#top">Back to top</a>)</p>

