# Answer

<div align="center">

English | [简体中文](README_zh-CN.md)

</div>


## Introduction

- Project address：[find_stones](https://github.com/windzu/find_stones_solution)
- Test Results：[Test Results](https://windzu.github.io/find_stones_solution/)

### Local Test

```bash
git clone https://github.com/windzu/find_stones_solution.git && \
cd find_stones_solution && \
mkdir build && \
cd build && \
cmake .. && \
make && \
./test/unit_test
```

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

The core of this problem is **search**, but search often requires sorting, usually with a complexity of O(nlogn)

In order to achieve the time complexity of O(n), the solution of this problem uses a hash table to store the elements in the array, the key is the array element, and the value is the subscript corresponding to the array element, so when traversing the array, only O(1) The time complexity of , you can find the elements that satisfy the conditions, so as to realize the time complexity of O(n)

However, if the elements in the array are floating-point numbers, the hash table cannot be used, because of the precision of floating-point numbers, the result of subtracting two floating-point numbers may be a very small floating-point number, but it cannot be represented in the computer. , this will cause the key in the hash table to be unable to be found, resulting in the inability to find elements that meet the conditions. After various attempts were unsuccessful, the final decision was made to use sorting + double pointers for floating-point numbers. The time complexity is O (nlogn)

### 4. Test Case
> please refer to [test](test/test.cpp)

The googletest framework is used for testing, and the writing of test cases follows the following principles:
- Override numerical boundary conditions
- Covers various numeric types
- Covers extreme cases

## Question C

**Integer**
- Time complexity：O(max(R, N))
- Space Complexity：O(max(R, N))

**Floating Point**

I haven't thought of a better way for the time being, and I haven't implemented it yet.

## One More Thing

For quick implementation, I also implemented a python version of the code, the code address is：[solution](python/solution.py)

You can test it with the following command：

```bash
cd python && \
python3 solution.py
```