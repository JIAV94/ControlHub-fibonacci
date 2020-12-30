#include<iostream>
#include<vector>
using namespace std;

int fibonacci (int n, vector<int> &pre_calc) {
  int num;
  if(pre_calc.size() > n)
    return pre_calc[n];

  for (int i = pre_calc.size(); i <= n; i++) {
    num = pre_calc[i-1]+pre_calc[i-2];
    pre_calc.push_back(num);
  }
  return pre_calc[n];
}

int main() {
  int n=0;
  vector<int> pre_calc;
  pre_calc.push_back(0);
  pre_calc.push_back(1);
  cout << "Enter a negative number to stop calculating numbers.";
  while (true) {
    cout << "Number: ";
    cin >> n;
    if(n < 0)
      return 0;
    cout << fibonacci(n, pre_calc) << endl;
  }
}
