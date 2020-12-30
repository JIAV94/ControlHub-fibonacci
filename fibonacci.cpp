#include<iostream>
#include<vector>
using namespace std;

int fibonacci (int n) {
  int num1=0, num2=1;

  for (int i = 2; i <= n; i++) {
    if ( i%2 == 0 )
      num1 += num2;
    else
      num2 += num1;
  }

  if (n%2 == 0)
    return num1;
  return num2;
}

int main() {
  int n;
  cout << "Number: ";
  cin >> n;
  cout << fibonacci(n);
  return 0;
}
