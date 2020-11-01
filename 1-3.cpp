#include <bits/stdc++.h>
using namespace std;

/*
C++では、整数同士で割り算した場合、結果は小数点以下を切り捨てした値になる
終了コードで得られる値が136となる時はエラー
1から100までの合計を算出する
*/
 
int main() {
  cout << 100 * (100 + 1) / 2 << endl;
}