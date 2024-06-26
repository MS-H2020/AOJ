#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main(){
  ll a, b, c;
  cin >> a >> b >> c;
  
  const auto &res = enum_divisors(c);
  
  int count = 0;
  rep(i, (int)res.size()){
    if(a <= res[i] && res[i] <= b) count++;
    //cout << res[i] << '\n';
  }
  cout << count << '\n';
  
  return 0;
}
