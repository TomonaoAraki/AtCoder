#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int s;
  int s_1;
  int s_2;
  int s_3;

  cin >> s;

  s_1 = s/100;
  s_2 = (s - s_1 * 100) / 10;
  s_3 = (s - s_1 * 100 -s_2 * 10);
 
  cout << s_1 + s_2 + s_3 << endl;
}