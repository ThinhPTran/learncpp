#include <iostream>
#include <vector> 

using namespace std;

int main() {
  size_t vsize = 10; 
  vector<int> vec(vsize);

  for (int iter = 0; iter < vsize; iter++) {
    vec[iter] = iter; 
  }

  for (int iter = 0; iter < vsize; iter++) {
    cout << "vec: " << vec[iter] << endl; 
  }

  //!!! No need to delete anything.


}

