#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
 
  for(int i = 0; i < N; i++){
      string op ;
      int x;

      cin >> op >> x ;

      if (op == "+") {
            A += x;
            cout << i + 1 ;
            cout << ":";
            cout << A << endl;
        }
        else if (op == "-"){
            A -= x;
            cout << i + 1;
            cout << ":";
            cout << A << endl;
        }
        else if (op == "*"){
            A *= x;
            cout << i + 1;
            cout << ":";
            cout << A << endl;
        }
        else if (op == "/"){
            if (x == 0){
                cout << "error" << endl;
                break;
            }
            else{
                A = A/x;
                cout << i + 1;
                cout << ":";
                cout << A << endl;
            }
        }
        else {
            cout << "error" << endl;
        }
    }
}