#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
#include <math.h>
#include <vector>

using namespace std;

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int result = (left - right) * (left - right);
    return result;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    /*int ans[100000];
    //vector<int> ans;
    int l = 0;
    while (mask > 1) {
      ans[l] = mask % 2;
      l += 1;
      mask /= 2;
    }
    ans[l] = mask % 2;
    l += 1;

    if ((bit_pos >= l) || (ans[bit_pos] == 0)) {
      return false;
    } else {
      return true;
    }*/
    if ((mask < 0) || (bit_pos < 0)) {
      return false;
    }
    bool b = (bool((1 << bit_pos) & mask));
    return b;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    if (left >= middle && left >= right) {
      return left;
    } else if (middle >= left && middle >= right) {
      return middle;
    } else {
      return right;
    }

    return 0;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr) {
      int c = *left;
      *left = *right;
      *right = c;
    }
    // Write your code here ...
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int sum = 0;
    if ((arr == nullptr) || (length <= 0)) {
      return 0;
    }
    for (int i = 0; i < length; ++i) {
      sum += arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if ((arr == nullptr) || (length <= 0)) {
      return nullptr;
    }
    int *point_max = nullptr;
    for (int i = 0; i < length; i++) {
      if (point_max == nullptr) {
        point_max = &arr[i];
      } else if (arr[i] > *point_max) {
        point_max = &arr[i];
      }
    }
    return point_max;

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length <= 0) {
      return nullptr;
    }
    int *a = new int[length];
    for (int i = 0; i < length; i++) {
      a[i] = init_value;
    }
    return &a[0];
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if ((arr_in == nullptr) || (length <= 0)) {
      return nullptr;
    }
    int *a = new int[length];
    for (int i = 0; i < length; i++) {
      a[i] = arr_in[i];
    }
    return &a[0];
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if ((arr == nullptr) || (length <= 0) || (k <= 0)) {
      if (arr == nullptr) {
        os << "Invalid argument: arr\\n";
      }
      if (length <= 0) {
        os << "Invalid argument: length\\n";
      }
      if (k <= 0) {
        os << "Invalid argument: k\\n";
      }
    }
    else{
      for (int i = 0; i < length; i += k) {
        os << arr[i] << "\t";
      }
    }


  }

}  // namespace assignment
