// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

int main () {
  int myints[] = {1,2,3,4,5,6,7,8};
  int n = 8;

  std::sort (myints,myints+n);


  do {
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] <<' '<<myints[3]<<' '<<myints[4]<<' '<<myints[5]<<' '<<myints[6]<<' '<<myints[7]<<'\n';
  } while ( std::next_permutation(myints,myints+n) );


  return 0;
}
