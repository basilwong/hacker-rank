#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <queue>



void check_test_3() {
  int node_cnt = 69;
  std::vector< int > test_results;
  int input;
  for (int i = 0; i < node_cnt; i++) {
    std::cin >> input;
    test_results.push_back(input);
  }

  int test_3_expected[] = {6, 6, 6, 6, 12, 6, 12, 6, 12, 12, 6, 6, 6, 6, 6, 12, 12, 6, 6, 6, 6, 12, 6, 12, 6, 12, 6, 12, 12, 12, 12, 6, 12, 12, 6, 12, 12, 6, 12, 6, 12, 6, 12, 12, 6, 6, 12, 6, 6, 6, 6, 12, 12, 12, 12, 6, 6, 6, 12, 6, 6, 12, 12, 12, 12, 12, 12, 6, 6};

  for (int j = 0; j < node_cnt; j++) {
    if (test_results[j] != test_3_expected[j]) {
      std::cout << "\n\nTest failure at node: " << j;
      std::cout << "\nExpected: " << test_3_expected[j];
      std::cout << "\nResult: " << test_results[j];
    } else {
      std::cout << "\nCorrect.";
    }
  }

}


void check_test_5() {
  int node_cnt = 445;
  std::vector< int > test_results;
  int input;
  for (int i = 0; i < node_cnt; i++) {
    std::cin >> input;
    test_results.push_back(input);
  }
  int expected_5[] =
    {
      12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,6,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,12,12,12,6,12,12,6,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,6,12,12,6,12,12,6,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,6,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,6,12,12
      ,6,6,12,6,6,12,12,12,6,6,6,12,6,6,12,6,6,6,12,12,6,12,6,12,12,12,12,6,12,6,6,6,6,6,6,6,6,12,12,6,6,6,12,12,12,6,6,6,6,6,12,6,6,12,6,6,12,12,6,12,12,6,6,6,12,12,12,6,6,6,12,12,6,12,6,6,12,6,12,12,12,12,6,6,12,6,12,6,12,12,6,12,6,6,6,6,6,12,12,6,12,12,12,12,12,12,6,6,12,12,6,6,6,12,6,12,12,6,6,6,12,6,6,12,12,6,6,12,12,6,12,12,12,6,12,6,6,12,12,6,12,12,12,12,12,6,6,6,6,6,12,6,12,12,12,12,12,6,12,12,6,12,12,12,12,12,6,6,6,6,6,6,12,6,6,12,6,6,6,12,12,6,6,12,12,6,6,6,6,6,6,6,12,12,6,6,12,6,6,6,12,6,12,12,6,12,12,6,12,6,12,12,6,12,12,12,6,6,6,6,6,6,6,6,12,6,12,6,6,12,6,6,6,6,12,12,6,6,12,6,6,6,6,12,12,12,12,12,6,6,12,6,12,6,6,6,12,12,6,12,12,6,12,6,12,6,12,6,12,6,12,12,6,6,6,6,6,12,6,6,12,6,6,12,12,6,6,6,12,6,6,12,6,6,6,12,6,6,6,6,12,6,12,12,12,12,6,12,12,6,6,12,12,6,12,6,6,6,6,6,6,6,12,6,6,6,6,6,6,6,12,12,6,12,6,6,12,6,6,12,6,6,6,6,6,6,6,12,6,6,12,12,12,6,6,12,12,12,6,6,6,6,6,12,12,6,12,12,12,12,6,6,6,6,6,12,12,6,6,12,12,12,6,6,12,6,6,12,6,12,6,6,6,6,12,6,12,12,6,6,6,12,6,12,12,6,6,6,6,12,12,6,6,12,12,6,6,12,6,6,6,12,6,6,12,12,6,6,12,12,6,12,6,6,12,6,6,6,12,6,6,6,6,6,6,12,6,12,6,6,12,6,6,6,6,6,6,6,6,12,12,12,12,6,12,12,6,6,12,12,12,12,12,6,6,6,6,6,6,6,6,6,6,12,12,6,6,6,12,6,6,12,6,6,6,12,6,6,6,6,6,12,12,6,6,6,12,12,12,6,6,12,12,6,6,6,6,6,12,6,6,12,6,6,6,6,6,6,12,12,12,6,6,6,6,12,12,12,6,6,6,6,6,12,12,12,6,6,12,6,12,6,6,12,6,6,6,6,6,6,6,6,6,6,6,6,12,12,6,6,12,6,6,6,12,12,6,6,6,6,6,6,12,6,6,6,12,6,12,12,6,6,12,6,6,6,12,6,12,6,12,6,6,6,6,12,12,12,12,12,12,6,12,12,12,6,12,12,6,12,12,12,6,12,12,6,6,6,6,12,12,6,6,6,6,6,12,12,12,6,12,12,6,12,6,6,12,6,12,12,12,12,6,12,12,6,6,12,6,12,12,6,6,12,6,12,6,6,12,12,6,6,12,12,12,12,6
      ,6,12,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,6,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,6,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,6,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1,12,-1,-1,-1
      ,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
      ,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,6,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,6,6,12,12,12,6,12,6,12,12,6,12,12,12,12,12,6,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,6,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,6,12,12,12,12,6,12,12,12,12,6,12,6,12,12,12,6,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,6,6,12,6,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,6,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,12,12,12,6,12,6,6,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,6,12,6,12,12,12,12,12,6,6,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,6,12,12,12,12,12,12,12,6,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,6,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,6,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,6,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,6,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,6,6,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,6,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,6,6,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,6,12,12,6,6,12,12,12,6,12,12,6,6,6,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,6,12,12,12,12,12,12,12,12,12,12,6,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,6,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12
      ,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
    };
  for (int j = 0; j < node_cnt; j++) {
    if (test_results[j] != expected_5[j]) {
      std::cout << "\n\nTest failure at node: " << j;
      std::cout << "\nExpected: " << expected_5[j];
      std::cout << "\nResult: " << test_results[j];
    }
  }

}


void check_test_6() {
  int node_cnt = 475;
  std::vector< int > test_results;
  int input;
  for (int i = 0; i < node_cnt; i++) {
    std::cin >> input;
    test_results.push_back(input);
  }
  int expected_6[] = {18,18,18,18,18,12,18,12,18,18,18,12,18,24,12,18,18,18,18,
    12,18,18,18,18,18,18,18,18,18,18,12,24,18,18,18,6,12,12,18,18,18,18,12,18,
    18,18,12,18,12,18,12,18,18,18,18,12,12,12,18,18,18,18,6,24,24,12,18,24,12,
    12,12,12,18,18,18,18,18,18,18,18,18,18,18,12,12,18,18,18,12,18,18,18,18,18,
    12,6,12,24,12,18,18,18,18,18,12,18,12,18,18,18,12,12,12,18,18,18,12,18,18,6,
    18,24,18,18,18,18,18,18,18,18,18,12,18,18,18,18,18,18,18,18,12,18,18,18,18,
    24,18,18,18,18,18,18,18,18,12,12,24,24,18,18,12,12,18,24,18,18,12,18,24,18,
    18,18,18,12,18,18,12,18,18,12,12,18,18,18,18,12,18,18,18,18,18,18,12,18,18,
    18,24,18,18,18,12,18,18,12,18,18,12,18,12,12,18,18,18,-1,12,18,18,24,18,18,
    18,18,18,18,18,12,24,12,12,12,12,24,18,12,18,12,12,18,18,12,18,18,18,18,18,
    12,12,12,18,18,18,18,18,18,18,18,18,18,18,18,18,12,18,18,18,18,18,18,18,18,
    12,12,18,18,18,18,-1,12,24,-1,18,18,24,18,18,18,18,18,18,12,12,18,18,18,12,
    12,18,18,12,18,18,12,18,24,12,18,18,12,18,18,18,18,12,6,18,18,18,18,18,18,
    24,18,18,12,18,12,18,18,18,12,18,18,18,18,6,18,12,18,18,18,18,18,18,18,12,
    12,12,12,18,12,12,18,18,18,18,18,12,18,18,18,18,12,18,18,12,12,18,12,18,18,
    18,24,12,12,18,18,12,18,12,12,18,18,18,18,12,18,18,24,12,18,24,12,18,18,12,
    18,12,12,18,18,18,12,18,18,18,12,12,18,24,18,12,12,12,12,24,18,18,18,12,12,
    18,12,18,18,18,12,12,12,18,24,18,12,18,18,18,18,18,18,18,12,18,18,18,18,18,
    18,18,24,12,18,18,18,12,18,12,18,12,18,18,12,6,12,18,18,18,18,12,24,18,12,
    18,24,18,24,18,12,-1,18,12,-1,18,-1,12,18,-1,-1,12,-1,-1,12,12,-1,18,-1,18,18,-1,-1,12,18,-1,18,12,-1,12,-1,12,18,-1,-1,18,-1,-1,18,12,-1,6,-1,12,12,-1,-1,6,-1,-1,12,12,-1,18,-1,18,18,-1,-1,6,-1,-1,18,12,-1,18,-1,12,12,-1,-1,12,-1,-1,18,12,-1,6,-1,18,18,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,12,-1,-1,6,12,-1,12,-1,12,18,-1,-1,12,18,-1,18,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,18,24,-1,18,18,-1,18,-1,12,6,-1,-1,12,-1,-1,12,12,-1,18,-1,12,18,-1,-1,12,-1,-1,18,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,18,-1,-1,12,-1,-1,18,12,-1,18,-1,12,18,-1,-1,12,-1,-1,18,12,-1,18,-1,12,12,-1,-1,6,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,18,-1,18,12,-1,6,-1,12,12,-1,-1,12,-1,-1,12,18,-1,18,-1,12,12,-1,-1,18,-1,-1,18,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,18,-1,-1,12,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,-1,-1,18,12,-1,12,-1,12,18,-1,-1,6,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,12,-1,12,12,-1,-1,6,-1,-1,12,12,-1,12,-1,12,6,-1,-1,12,-1,-1,18,12,-1,6,-1,18,12,-1,-1,12,18,-1,12,12,-1,12,-1,12,12,-1,-1,6,-1,-1,12,12,-1,12,-1,12,18,-1,-1,12,-1,-1,12,12,-1,12,-1,12,18,-1,-1,12,-1,-1,12,12,-1,18,-1,12,18,-1,-1,12,-1,-1,6,12,-1,18,-1,12,18,-1,-1,12,-1,-1,18,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,12,-1,12,18,-1,-1,12,-1,-1,18,18,-1,18,-1,12,18,-1,-1,12,-1,-1,18,12,-1,6,-1,12,12,-1,-1,12,18,-1,18,12,-1,18,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,18,-1,-1,12,-1,-1,12,12,-1,6,-1,12,12,-1,-1,12,-1,-1,12,12,-1,12,-1,12,6,-1,-1,12,-1,-1,12,18,-1,18,-1,12,12,-1,-1,12,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,18,-1,18,-1,12,18,-1,-1,12,-1,-1,12,-1,12,-1,12,18,-1,-1,6,-1,-1,6,18,-1,18,-1,12,18,-1,-1,12,-1,-1,12,18,-1,12,-1,12,18,-1,-1,12,-1,-1,18,12,-1,12,-1,12,12,-1,-1,12,-1,-1,18,12,-1,12,-1,12,18,-1,-1,12,-1,-1,18,18,-1,12,-1,12,18,-1,-1,12,-1,-1,6,12,-1,18,-1,12,12,-1,-1,12,-1,-1,18,12,-1,12,-1,18,12,-1,-1,18,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,12,-1,-1,18,18,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,12,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,6,-1,-1,12,18,-1,18,-1,12,18,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,12,-1,-1,18,12,-1,18,-1,12,18,-1,-1,12,-1,-1,12,12,-1,12,-1,12,6,-1,-1,12,-1,-1,18,18,-1,18,-1,12,12,-1,-1,6,-1,-1,12,18,-1,18,-1,12,12,-1,-1,12,-1,-1,12,12,-1,18,-1,12,12,-1,-1,12,-1,-1,18,12,-1,12,-1,12,18,-1,-1,12,-1,-1,18,12,-1,18,-1,12,18,-1,-1,12,-1,-1,18,12,-1,18,-1,12,18,-1,-1,12,-1,-1,18,12,-1,6,-1,12,12,-1,-1,6,-1,-1,12,12,-1,18,-1,18,18,-1,-1
,18,30,24,-1,24,24,18,12,24,18,24,18,30,24,24,18,30,24,18,-1,24,18,24,18,24,24,24,18,-1,18,18,18,-1,30,18,18,-1,24,12,18,6,12,30,24,12,24,24,18,30,24,24,18,30,18,-1,24,24,12,30,24,18,24,24,24,30,24,18,30,-1,6,24,18,24,30,18,30,24,24,18,12,18,24,24,18,-1,30,24,6,18,18,30,6,24,12,30,24,24,24,24,18,24,12,18,24,12,24,12,18,24,18,30,30,24,18,12,12,24,18,24,30,30,12,24,18,18,24,30,24,-1,18,30,18,24,12,-1,24,30,24,24,24,-1,18,18,24,30,24,18,24,24,18,24,-1,24,24,24,36,24,18,24,30,18,24,18,30
,12,-1,18,24,-1,18,-1,12,18,-1,-1,24,-1,-1,24,24,-1,24,-1,12,18,-1,-1,18,-1,-1,18,24,-1,30,-1,12,30,-1,-1,18,-1,-1,6,24,-1,18,-1,18,18,-1,-1,24,-1,-1,18,24,-1,18,-1,24,18,-1,-1,18,-1,-1,30,12,-1,18,-1,24,24,-1,-1,18,-1,-1,18,-1,18,-1,12,18,-1,-1,12,-1,-1,30,24,-1,24,-1,24,6,-1,-1,24,-1,-1,24,24,-1,18,-1,24,24,-1,-1,24,-1,-1,24,18,-1,18,-1,24,24,-1,-1,18,-1,-1,24,24,-1,18,-1,24,18,-1,-1,18,-1,-1,18,18,-1,24,-1,24,18,-1,-1,24,-1,-1,18,24,-1,24,-1,24,18,-1,-1,18,-1,-1,24,12,-1,30,-1,12,-1,-1,-1,12,-1,-1,18,12,-1,24,-1,12,18,-1,-1,18,-1,-1,24,24,-1,18,-1,24,24,-1,-1,18,-1,-1,24,24,-1,18,-1,24,24,-1,-1,18,-1,-1,18,24,-1,18,-1,24,18,-1,-1,18,-1,-1,6,18,-1,18,-1,24,18,-1,-1,24,-1,-1,24,12,-1,18,-1,12,18,-1,-1,18,-1,-1,24,24,-1,24,-1,24,18,-1,-1,18,-1,-1,24,18,-1,18,-1,24,18,-1,-1,18,-1,-1,18,24,-1,30,-1,24,18,-1,-1,12,-1,-1,18,24,-1,18,-1,24,30,-1,-1,12,-1,-1,24,24,-1,18,-1,18,18,-1,-1,12,-1,-1,24,24,-1,18,-1,24,18,-1,-1,18,-1,-1,18,12,-1,18,-1,24,18,-1,-1,18,-1,-1,18,24,-1,18,-1,24,24,-1,-1,18,-1,-1,18,24,-1,18,-1,24,18,-1,-1,18,-1,-1,18,24,-1,18,-1,12,24,-1,-1,
18,-1,-1,24,24,-1,18,-1,24,18,-1,-1,18,-1,-1,18,24,-1,18,-1,24,18,-1,-1,18,-1,-1,18,12,-1,18,-1,24,18,-1,-1,24,-1,-1,18,18,-1,18,-1,12,18,-1,-1,18,-1,-1,24,24,-1,30,-1,24,24,-1,-1,18,-1,-1,24,12,-1,30,-1,24,18,-1,-1,24,-1,-1,-1,12,-1,6,-1,24,18,-1,-1,18,24,-1,18,24,-1,24,-1,24,18,-1,-1,18,-1,-1,18,12,-1,24,-1,24,30,-1,-1,24,-1,-1,18,24,-1,18,-1,24,24,-1,-1,24,-1,-1,18,18,-1,18,-1,18,30,-1,-1,24,-1,-1,24,12,-1,30,-1,24,18,-1,-1,18,-1,-1,24,24,-1,18,-1,12,24,-1,-1};

  for (int j = 0; j < node_cnt; j++) {
    if (test_results[j] != expected_6[j]) {
      std::cout << "\n\nTest failure at node: " << j;
      std::cout << "\nExpected: " << expected_6[j];
      std::cout << "\nResult: " << test_results[j];
    }
  }

}



int main() {
  check_test_5();

  return 0;
}
