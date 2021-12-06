//
// Created by Антон Шмидт on 06.12.2021.
//

#include "solution.h"

using namespace std;

void Solution::rotate(std::vector<int> &nums, int k) {
  if (0 < nums.size()) {
    k %= nums.size();
    if (k) {
      vector<int> temp;
      temp.resize(nums.size());
      auto iter = nums.end() - k;
      copy(iter, nums.end(), temp.begin());
      copy(nums.begin(), iter, temp.begin() + k);
      nums = temp;
    }
  }
}
