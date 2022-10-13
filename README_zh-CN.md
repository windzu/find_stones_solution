# Answer

## Introduction

为了方便贵司面试官对我的代码进行评估，我将代码提交到了github上，地址为：[find_stones](https://github.com/windzu/find_stones_solution)

通过github action生成的测试结果可查看[results](https://github.com/windzu/find_stones_solution/results.html)

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

给定一个数组 nums 和一个数 k，从 nums 中找到满足 nums[j]-nums[i] == k 条件的第一对 (nums[j]-nums[i])，然后返回一对值所对应的下标 (i, j) (可以是 None),具体条件如下 :

- i != j
- 0 <= i, j < len(nums)
- nums[j] - nums[i]) == k

注意：
- nums 数组中的元素为数值类型，可能为整数或浮点数，可能重复，数组长度可能为 0，数值范围可能为double上下限
- k 为数值类型，可能为整数或浮点数，数值范围可能为double上下限

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

请参考 [solution](lib/solution.hpp)

### 2. Space Complexity & Time Complexity

**整数类型**
- 时间复杂度：O(n)
- 空间复杂度：O(n)

**浮点类型**
- 时间复杂度：O(nlogn)
- 空间复杂度：O(nlogn)

### 3. Analysis & Optimization

### 4. Test Case
> 详情请参考 [test](test/test.cpp)

采用googletest框架进行测试，测试用例的编写遵循以下原则：
- 覆盖数值边界条件
- 覆盖各种数值类型
- 覆盖极端情况

## Question C

**整数类型**
- 时间复杂度：O(max(R, N))
- 空间复杂度：O(max(R, N))

**浮点类型**

暂时没有想到更好的方法，暂时没有实现

## One More Thing

为了快速实现，我同时也实现了一个python版本的代码，代码地址为：[solution](python/solution.py)

可以通过以下命令进行测试：

```bash
cd python && \
python3 solution.py
```
