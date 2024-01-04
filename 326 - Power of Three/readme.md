## 324. [Power of Three](https://leetcode.com/problems/power-of-three/)

Given an integer ```n```, return ```true``` if it is a power of three. Otherwise, return ```false```.

An integer ```n``` is a power of three, if there exists an integer ```x``` such that ```n == 3x```.

 

### Example 1:

> Input: n = 27
> Output: true
> Explanation: 27 = 33
### Example 2:

> Input: n = 0
> Output: false
> Explanation: There is no x where 3x = 0.
### Example 3:

> Input: n = -1
> Output: false
> Explanation: There is no x where 3x = (-1).
 

### Constraints:

$-2^{31} <= n <= 2^{31} - 1$
## Solution Explained 
<ol>
<li> Checking the number if it equals to <i>1</i> then we return <i>1</i>.</li>
<li> We run a <i>for</i> loop until the constraint power that is <i>30</i>. </li>
<li> We check all the possible numbers which can be represented as the power of 3. </li>
<li> If we find one number that matches the criteria then we return <i>true</i> otherwise <i>false</i>.</li>

</ol>
