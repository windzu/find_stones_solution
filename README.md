# Answer

## Question A
> Formally describe the question

Given an array nums and a number k, find the first pair (nums[j]-nums[i]) from nums that satisfies the condition nums[j]-nums[i] == k, and return a pair of values The corresponding subscript (i, j) (can be None), the specific conditions are as follows:

- i != j
- 0 <= i, j < len(nums)
- nums[j] - nums[i]) == k

Notice:
- The elements in the nums array are numeric types, which may be integers or floating-point numbers, may be repeated, the array length may be 0, and the value range may be the upper and lower limits of double
- k is a numeric type, which may be an integer or a floating-point number, and the value range may be the upper and lower limits of double

example1:
```cpp
Input: nums = [3,1,4,1,5], k = 2
Output: [1,3]
```
example2:
```cpp
Input: nums = [1,2,3,4], k = 1
Output: [1,2]
```

## Question B

### 1. Code

Please refer to [solution](lib/solution.hpp)

### 2. Space Complexity & Time Complexity

**Integer**
- Time complexity：O(n)
- Space Complexity：O(n)

**Floating Point**
- Time complexity：O(nlogn)
- Space Complexity：O(nlogn)

### 3. Analysis & Optimization

### 4. Test Case
> please refer to [test](test/test.cpp)

The googletest framework is used for testing, and the writing of test cases follows the following principles:
- Override numerical boundary conditions
- Covers various numeric types
- Covers extreme cases

## Question C

**Integer**
- 时间复杂度：O(max(R, N))
- 空间复杂度：O(max(R, N))

**Floating Point**

I haven't thought of a better way for the time being, and I haven't implemented it yet.

## One More Thing

为了快速实现，我同时也实现了一个python版本的代码，代码地址为：[solution](python/solution.py)

可以通过以下命令进行测试：

```bash
cd python && \
python3 solution.py
```