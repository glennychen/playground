#include <iostream>

using namespace std;

int main()
{

  int i =42;
  int *p1 = &i;
  *p1 = *p1* *p1;
  cout << *p1 << endl;
  cout << i << endl;

  return 0;
}
