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
#include <unordered_set>

// local headers
#include "solution.hpp"

int main(int, char**) {
  // main for debug
  Solution<float> s;
  std::vector<float> nums = {2.2, -1.1, 1, -0.5, -1.1};
  float k = 3.3;
  std::vector<int> res = s.find_k_diff_pair(nums, k);
  std::cout << "res: " << res[0] << ", " << res[1] << std::endl;
  // EXPECT_EQ(s.find_k_diff_pair(nums, k), std::vector<int>({1, 0}));
  return 0;
}
