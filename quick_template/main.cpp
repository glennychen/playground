#include <iostream>
#include <type_traits>

#include "boost/regex.hpp"

#include "absl/container/inlined_vector.h"
#include "absl/container/btree_map.h"

int main()
{
  
  std::string s = "Boost Libraries";
  boost::regex expr{"\\w+\\s\\w+"};
  std::cout << std::boolalpha << boost::regex_match(s, expr) << '\n';

  {
    using IntVec = absl::InlinedVector<int, 8>;
    IntVec v = {1};
    v.pop_back();
  }

  {
    const int kSetSize = 1201;
    absl::btree_map<std::string, int64_t> my_map;
    for (int i = 0; i < kSetSize; ++i) {
      my_map[std::string(i, 'a')] = i;
    }
  }
  static_assert("looks like working", "what");
}
