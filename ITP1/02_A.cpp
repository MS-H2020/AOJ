#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main(){
  int a, b;
  cin >> a >> b;
  
  if(a < b) cout << "a < b" << endl;
  else if(a > b) cout << "a > b" << endl;
  else if(a == b) cout << "a == b" << endl;
  
  return 0;
}
