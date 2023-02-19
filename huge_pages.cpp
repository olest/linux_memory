
// based on: https://rigtorp.se/hugepages/

#include<unordered_map>

int main() {


  size_t iters = 100000000;
  std::unordered_map<size_t, size_t> ht;
  ht.reserve(iters);
  for (size_t i = 0; i < iters; ++i) {
    ht[i] = i;
  }


}
