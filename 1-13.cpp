#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int ave_score = 0;

  vector<int> score(N);
  for (int i = 0; i < N; i++){
    cin >> score.at(i);
    ave_score += score.at(i);
  }

  ave_score = ave_score / N;

  for (int i = 0; i < N; i++){
      if (score.at(i) < ave_score){
          cout << ave_score - score.at(i) << endl;
      }
      else if (score.at(i) >= ave_score){
          cout << score.at(i) - ave_score << endl;
      }
  }
}