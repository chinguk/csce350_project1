// Copyright 2024 Chi Nguyen
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

void Sieve (bool prime[], int n) {
  for (int i = 2; i <= n; i++) {
    prime[i] = true;
  }

  for (int m = 2; m * m <= n; m++) {
    if (prime[m] == true) {
      for (int i = m * m; i <= n; i += m) {
        prime[i] = false;
      }
    }
  }
}

int GCD(int num1, int num2) {
  int gcd = 1;

  for (int i = 2; i <= num1; ++i) {
    while (num1 % i == 0 && num2 % i == 0) {
      gcd *= i;
      num1 /= i;
      num2 /= i;
    }
  }

  return gcd;
}

int main() {
  int a, b;
  cout << "Please enter the first value" << endl;
  cin >> a;
  cout << "Please enter the second value" << endl;
  cin >> b;

  int answer = GCD(a, b);

  cout << "The GCD of " << a << " and " << b << " is " << answer << endl;

  return 0;
}
