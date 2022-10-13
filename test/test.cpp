/*
 * @Author: windzu
 * @Date: xxxx-xx-xx xx:xx:xx
 * @LastEditTime: xxxx-xx-xx xx:xx:xx
 * @LastEditors: windzu
 * @Description: K-diff Pairs in an Array
 * @Copyright (C) 2021-2022 None. All rights reserved.
 * @Licensed under the Apache License, Version 2.0 (the License)
 */

// cpp system headers
#include <algorithm>
#include <iostream>

// third party headers
#include "gtest/gtest.h"
// local headers
#include "solution.hpp"

TEST(test_q1, int_case0) {
  // int arrays are ordered
  Solution<int> s;
  std::vector<int> nums = {1, 2, 3, 4, 5};
  int k = 2;
  EXPECT_EQ(s.find_k_diff_pair(nums, k), std::vector<int>({0, 2}));
}

TEST(test_q1, int_case1) {
  // negative elements
  Solution<int> s;
  std::vector<int> nums = {-1, 2, 1, 4, -5};
  int k = 2;
  EXPECT_EQ(s.find_k_diff_pair(nums, k), std::vector<int>({0, 2}));
}

TEST(test_q1, int_case2) {
  // k=0
  Solution<int> s;
  std::vector<int> nums = {1, 1, 1, 4, -5};
  int k = 0;
  EXPECT_EQ(s.find_k_diff_pair(nums, k), std::vector<int>({0, 1}));
}

TEST(test_q1, float_case0) {
  // float arrays are not ordered
  Solution<float> s;
  std::vector<float> nums = {2.2, -1.1, 1, -0.5, -1.1};
  float k = 3.3;
  EXPECT_EQ(s.find_k_diff_pair(nums, k), std::vector<int>({1, 0}));
}

TEST(test_q1, double_case0) {
  // double arrays are not ordered
  Solution<double> s;
  std::vector<double> nums = {2.2, -1.1, 1, -0.5, -1.1};
  double k = 3.3;
  EXPECT_EQ(s.find_k_diff_pair(nums, k), std::vector<int>({1, 0}));
}

TEST(test_q3, int_case0) {
  // int arrays are unordered
  Solution<int> s;
  std::vector<int> nums = {3, 1, 4, 1, 5};
  int k = 2;
  std::vector<std::vector<int>> expect_res = {{0, 4}, {1, 0}, {3, 0}};  // [[0,4],[1,0],[3,0]]
  std::vector<std::vector<int>> res = s.find_k_diff_pairs(nums, k);
  // sort the result
  std::sort(res.begin(), res.end());
  EXPECT_EQ(res, expect_res);
}

// Test Question C
TEST(test_q3, int_case1) {
  // repeat elements
  Solution<int> s;
  std::vector<int> nums = {3, 3, 3, 1, 1};
  int k = 2;
  std::vector<std::vector<int>> expect_res = {{3, 0}, {3, 1}, {3, 2}, {4, 0}, {4, 1}, {4, 2}};
  std::vector<std::vector<int>> res = s.find_k_diff_pairs(nums, k);
  // sort the result
  std::sort(res.begin(), res.end());
  EXPECT_EQ(res, expect_res);
}

TEST(test_q3, int_case2) {
  // k=0
  Solution<int> s;
  std::vector<int> nums = {3, 3, 3, 1, 1};
  int k = 0;
  std::vector<std::vector<int>> expect_res = {{0, 1}, {0, 2}, {1, 2}, {3, 4}};
  std::vector<std::vector<int>> res = s.find_k_diff_pairs(nums, k);
  // sort the result
  std::sort(res.begin(), res.end());
  EXPECT_EQ(res, expect_res);
}
