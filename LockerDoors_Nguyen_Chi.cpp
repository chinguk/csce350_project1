// Copyright Chi Nguyen 2024
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

void Locker(bool lock[], int n, int pass) {
  for(int passes =  1; passes <= pass; ++passes)
    for (int i = passes - 1; i < n; i += passes) {
      lock[i] = !lock[i];
    }
}

int main() {
  int n, r;
  cout << "Enter the number of lockers: " << endl;
  cin >> n;
  cout << "Enter the number of passes: " << endl;
  cin >> r;

  bool* lock = new bool[n];

  for (int i = 0; i < n; ++i) {
    lock[i] = false;
  }

  Locker(lock, n, r);

  cout << "After " << r << " passes, " << endl;
  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (lock[i]) {
      cout << "Locker " << (i + 1) << " open" << endl;
      count++;
    } else {
        cout << "Locker " << (i + 1) << " closed" << endl;
    }
  }
  cout << "Number of open lockers: " << count << endl;

  delete[] lock;
  
  return 0;
}
