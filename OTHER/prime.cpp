#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int *Location = new int[N + 1];
  for (int i = 0; i != N + 1; ++i)
    Location[i] = i;
  Location[1] = 0; //筛除部分
  int p, q, end;
  end = sqrt((double)N) + 1;
  for (p = 2; p != end; ++p) {
    if (Location[p]) {
      for (q = p; p * q <= N; ++q) {
        for (int k = p * q; k <= N; k *= p)
          Location[k] = 0;
      }
    }
  }
  int m = 0;
  for (int i = 1; i != N + 1; ++i) {
    if (Location[i] != 0) {
      cout << Location[i] << " ";
      ++m;
    }
    if (m % 10 == 0)
      cout << endl;
  }
  cout << endl << m << endl;
  return 0;
}