#include <iostream>
using namespace std;

template<typename T>
class Value {
  T data;
public:
  Value(T d = T()) : data(d) {
    cout << ">" << data << ' ';
  }
  ~Value() {
    cout << "~" << data << ' ';
  }
  operator T() const { return data; }

  friend ostream& operator<<(ostream& os, const Value& x) {
    return os << "Value: " << x.data;
  }
  
  friend ostream& operator<<(ostream& os, const Value* x) {
    return os << "Value: " << x->data;
  }
};
