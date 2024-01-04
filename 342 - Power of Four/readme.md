## 342. [Power of Four](https://leetcode.com/problems/power-of-four/) 

Given an integer ``` n```, return ```true``` if it is a power of four. Otherwise, return ```false```.

An integer ```n``` is a power of four, if there exists an integer ```x``` such that ```n == 4x```.

 

### Example 1:

> Input: n = 16<br/>
> Output: true
### Example 2:

> Input: n = 5<br/>
> Output: false
### Example 3:

> Input: n = 1<br/>
> Output: true
 

### Constraints:

- $-2^{31} <= n <= 2^{31} - 1$

## Solution Explained 
<ol>
<li> Checking the number if it equals to <i>1</i> then we return <i>1</i>.</li>
<li> We run a <i>for</i> loop until the constraint power that is <i>30</i>. </li>
<li> We check all the possible numbers which can be represented as the power of 4. </li>
<li> If we find one number that matches the criteria then we return <i>true</i> otherwise <i>false</i>.</li>

</ol>
