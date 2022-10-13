/*
 * @Author: windzu
 * @Date: xxxx-xx-xx xx:xx:xx
 * @LastEditTime: xxxx-xx-xx xx:xx:xx
 * @LastEditors: windzu
 * @Description: K-diff Pairs in an Array
 * @Copyright (C) 2021-2022 None. All rights reserved.
 * @Licensed under the Apache License, Version 2.0 (the License)
 */
#pragma once

// cpp system headers
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

template <class T>
class Solution {
 public:
  /**
   * @description: Find the first pair (nums[j]-nums[i]) that satisfies the nums[j]-nums[i] == k condition,
   * then return the pair of values (i, j) (can be None),
   * the specific conditions are as follows：
   *  - i != j
   *  - nums[i] < nums[j]
   *  - nums[j] - nums[i] == k
   * Example:
   *  Input: nums = [3, 1, 4, 1, 5], k = 2
   *  Output: [0,1]
   * @param {std::vector<T>} nums : the input array
   * @param {T} k : the difference value
   * @return {std::vector<T>} : the pair of values (nums[i], nums[j]) (can be None)
   */
  std::vector<int> find_k_diff_pair(const std::vector<T>& nums, T k) {
    // check input
    if (nums.size() < 2) {
      return {};
    }

    // When the input type is a floating point number, the hash table cannot be used
    // because the floating point number cannot be used as a key in the hash table.
    // So we need to use sorting and comparison to solve the problem
    if (typeid(k) == typeid(float) || typeid(k) == typeid(double)) {
      return find_k_diff_pair_fp(nums, k);
    }

    // When the input type is an integer, the hash table can be used
    // 1. use hash table to store the value of nums for O(1) search
    // 2. problem solved
    std::unordered_map<T, int> visited;
    for (int i = 0; i < nums.size(); i++) {
      if (visited.count(nums[i] - k)) {
        return std::vector<int>{visited[nums[i] - k], i};
      }
      if (visited.count(nums[i] + k)) {
        return std::vector<int>{i, visited[nums[i] + k]};
      }

      visited.emplace(nums[i], i);
    }
    return {};
  }

  std::vector<int> find_k_diff_pair_fp(const std::vector<T>& nums, T k) {
    // eps is the smallest positive number that can be represented by the floating point number
    T eps;
    if (typeid(k) == typeid(float)) {
      eps = 1e-6;
    } else if (typeid(k) == typeid(double)) {
      eps = 1e-14;
    }

    // 1. build pair array for store the index of nums and sort the pairs array
    // 2. use two pointers to find the first pair that satisfies the nums[j]-nums[i] == k condition
    // 3. problem solved
    // Note: when performing numerical comparisons, the precision of floating-point numbers must be considered
    //      so we need to use eps to determine the precision of the floating-point number
    std::vector<std::pair<T, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
      pairs.emplace_back(nums[i], i);
    }
    std::sort(pairs.begin(), pairs.end());

    int i = 0, j = 1;
    while (i < pairs.size() && j < pairs.size()) {
      if (i != j && fabs(pairs[j].first - pairs[i].first - k) < eps) {
        return std::vector<int>{pairs[i].second, pairs[j].second};
      } else if (i != j && pairs[j].first - pairs[i].first < k) {
        j++;
      } else {
        i++;
      }
    }
    return {};
  }

  /**
   * @description: Find all pairs [(nums[i], nums[j]),...] that satisfy the nums[j]-nums[i] == k condition,
   * then return the list of pairs [(i, j),...] (can be empty),
   * NOTE : (nums[i], nums[j]) and (nums[j], nums[i]) are considered the same pair,
   * the specific conditions are as follows：
   *  - i != j
   *  - nums[i] < nums[j]
   *  - nums[j] - nums[i] == k
   * Example:
   *  Input: nums = [3, 1, 4, 1, 5], k = 2
   *  Output: [[0,4],[1,0],[3,0]]
   * @param {std::vector<T>} nums : the input array
   * @param {T} k : the difference value
   * @return {std::vector<std::vector<T>>} : the list of pairs [(i, j),...] (can be empty)
   */
  std::vector<std::vector<int>> find_k_diff_pairs(const std::vector<T>& nums, T k) {
    // check input
    if (nums.size() < 2) {
      return {};
    }

    std::unordered_map<T, std::vector<int>> visited;
    std::unordered_map<int, std::unordered_set<int>> res;

    // construct the hash table for O(1) lookup
    // NOTE: the key is the value of nums[i], and the value is the index of nums[i]
    // structure is as follows:
    // {
    //   nums[i]: [i1, i2, ...],
    //   nums[j]: [j1, j2, ...],
    //   ...
    // }
    for (int i = 0; i < nums.size(); i++) {
      if (visited.count(nums[i])) {
        visited[nums[i]].emplace_back(i);
      } else {
        visited.emplace(nums[i], std::vector<int>{i});
      }
    }

    // when k == 0, which is a special case,
    // the result is a permutation of repeated numbers
    // example:
    // Input: nums = [3, 3, 3, 1, 1], k = 0
    // hash table is as follows:
    // {
    //   3: [0, 1, 2],
    //   1: [3, 4],
    // }
    // Output: [[0,1],[0,2],[1,2],[3,1]]
    if (k == 0) {
      std::vector<std::vector<int>> res_vec;
      for (auto& [key, value] : visited) {
        if (value.size() >= 2) {
          for (int i = 0; i < value.size(); i++) {
            for (int j = i + 1; j < value.size(); j++) {
              res_vec.emplace_back(std::vector<int>{value[i], value[j]});
            }
          }
        }
      }
      return res_vec;
    }

    // when k != 0, which is a general case,
    // traverse the hash table to find the pairs
    // store the pairs in the hash table to avoid duplicates
    // structure is as follows:
    // {
    //   i1: {j1, j2, ...},
    //   i2: {j1, j2, ...},
    //   ...
    // }
    // the output should as follows and they should be unique:
    // [[i1, j1], [i1, j2], ..., [i2, j1], [i2, j2], ...]
    //
    // Trick:
    // If a number in a hash table is hit by -k and +k respectively, it will no longer need to be considered,
    // and the " used_count " variable is used in the program to determine the number of hits
    for (auto& [key, value] : visited) {
      int used_count = 0;
      if (visited.count(key + k)) {
        used_count++;
        for (auto& i : value) {
          for (auto& j : visited[key + k]) {
            if (res.count(i)) {
              res[i].emplace(j);
            } else {
              res.emplace(i, std::unordered_set<int>{j});
            }
          }
        }
      }
      if (visited.count(key - k)) {
        used_count++;
        for (auto& i : visited[key - k]) {
          for (auto& j : value) {
            if (res.count(i)) {
              res[i].emplace(j);
            } else {
              res.emplace(i, std::unordered_set<int>{j});
            }
          }
        }
      }
      if (used_count == 2) {
        visited.erase(key);
      }
    }

    // finally, convert the hash table to the output format
    // convert the map to vector
    std::vector<std::vector<int>> res_vec;
    for (auto& [key, value] : res) {
      for (auto& j : value) {
        res_vec.emplace_back(std::vector<int>{key, j});
      }
    }

    return res_vec;
  }
};
