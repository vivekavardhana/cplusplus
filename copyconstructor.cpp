// copy constructor: deep copy
#include <iostream>
#include <string>
using namespace std;

class CopyConstr {
    string* ptr;
  public:
    CopyConstr (const string& str) : ptr(new string(str)) {}
    ~CopyConstr () {delete ptr;}
    // copy constructor:
    CopyConstr (const CopyConstr& x) : ptr(new string(x.content())) {}

    //copy assignment
    CopyConstr& operator= (const CopyConstr& x) {
      delete ptr;                      // delete currently pointed string
      ptr = new string (x.content());  // allocate space for new string, and copy
      return *this;
    }
    // access content:
    const string& content() const {return *ptr;}
};

int main () {
  CopyConstr foo ("Example");
  CopyConstr bar = foo;

  cout << "bar's content: " << bar.content() << '\n';
  return 0;
}