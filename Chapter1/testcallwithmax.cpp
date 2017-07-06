#include <iostream>

using namespace std;

int a =5;
int b =0;

int nhanhai(int in) {
  return 2*in; 
}

#define CALL_WITH_MAX(a,b) nhanhai((a)>(b) ? (a):(b))

template<typename T>
inline int callWithMax(const T& a, const T& b)
{
  nhanhai(a > b ? a:b); 
}


int
main() {

  int c1 = CALL_WITH_MAX(++a,b);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c1 << endl;

  int c2 = CALL_WITH_MAX(++a,b+10);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c2 << endl;

  int c3 = callWithMax(++a,b);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c3 << endl;

  int c4 = callWithMax(++a,b+10);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c4 << endl;

}
