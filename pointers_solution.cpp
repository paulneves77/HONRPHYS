#include <iostream>

using namespace std;

int main() {

  double* p1 = new double(3.14);

  double* p2 = p1;

  cout << "pointer p1 points at " << p1 << " and the value at " << p1 << " is " << *p1 << endl;
  cout << "pointer p2 points at " << p2 << " and the value at " << p2 << " is " << *p2 << endl;

  *p1 = *p1 * 2;

  cout << "p1 now points to value " << *p1 << endl;
  cout << "p2 now points to value " << *p2 << endl;

  return 0;

}
