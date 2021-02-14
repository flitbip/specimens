//
//  timer.cpp
//
//

#include "stopwatch.h"
#include <deque>
#include <iostream>
#include <vector>

using std::deque;
using std::vector;
using std::cout;
using std::endl;

void timer_test() {
  const auto deque_samples = stopwatch::sample<100>([] {
    deque<int> deque;
    for (std::size_t i = 0; i < 10000; ++i) {
      deque.insert(deque.begin(), i);
    }
  });

  const auto vector_samples = stopwatch::sample<100>([] {
    vector<int> vector;
    for (std::size_t i = 0; i < 10000; ++i) {
      vector.insert(vector.begin(), i);
    }
  });

  cout << "median for deque: " << deque_samples[49].count() << endl;
  cout << "median for vector: " << vector_samples[49].count() << endl;
}
