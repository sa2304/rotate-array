#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

void TestRotate() {
  Solution s;
  {
    vector<int> numbers;
    s.rotate(numbers, 1);
    assert(numbers.empty());
  }
  {
    vector numbers{1};
    s.rotate(numbers, 1);
    assert((vector{1}) == numbers);
  }
  {
    vector numbers{1};
    s.rotate(numbers, 2);
    assert((vector{1}) == numbers);
  }
  {
    vector numbers{1, 2};
    s.rotate(numbers, 2);
    assert((vector{1, 2}) == numbers);
  }
  {
    vector numbers{1, 2};
    s.rotate(numbers, 1);
    assert((vector{2, 1}) == numbers);
  }
  {
    vector numbers{1, 2, 3, 4, 5, 6, 7};
    s.rotate(numbers, 3);
    assert((vector{5, 6, 7, 1, 2, 3, 4}) == numbers);
  }
  {
    vector numbers{-1, -100, 3, 99};
    s.rotate(numbers, 2);
    assert((vector{3, 99, -1, -100}) == numbers);
  }
}

int main() {
  TestRotate();
  std::cout << "Ok!" << std::endl;
  return 0;
}
