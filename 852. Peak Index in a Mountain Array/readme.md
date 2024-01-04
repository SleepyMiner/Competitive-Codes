<div id="top"></div>

## 852. [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)

An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
- $arr[0] < arr[1] < ... < arr[i - 1] < arr[i]$ 
- $arr[i] > arr[i + 1] > ... > arr[arr.length - 1]$

Given a mountain array arr, return the index i such that $arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1]$.

You must solve it in O(log(arr.length)) time complexity.

 

### Example 1:

> Input: arr = [0,1,0] <br/>
> Output: 1 
### Example 2:

> Input: arr = [0,2,1,0] <br/>
> Output: 1 <br/>
### Example 3:

> Input: arr = [0,10,5,2] <br/>
> Output: 1 
 

### Constraints:

- $3 <= arr.length <= 105$
- $0 <= arr[i] <= 106$
- arr is guaranteed to be a mountain array.

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
