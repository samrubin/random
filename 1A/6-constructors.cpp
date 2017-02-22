#include <iostream>
using namespace std;

class Foo {
public:
  void foo(int _x) {
    x = _x;
    if (!y)
      y = new int(x);
    else
      *y = x;
  };
  void print() { 
    cout << "x: " << x << "\n&x:" << &x << "\n*y: " << *y << "\ny: " << y << endl;
  };
private:
  int x;
  int* y;
};

int main(const int argc, const char* const argv[]) {
  Foo x;
  x.foo(3);
  Foo y(x);
  //  Foo z;

  x.print();
  y.print();
  //  z.print();
  cout << "--------------------" << endl;

  x.foo(4);
  x.print();
  y.print();
  return 0;
}
