#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main()
{
  //int ti = clock();
  
  while(cin){
    int H, W;
    cin >> H >> W;
    rep(i,H){
      rep(j,W){
        if(i != 0 && i != H-1 && j!= 0 && j!=W-1) cout << '.';
        else cout << '#';
      }
      cout << '\n';
    }
    cout << '\n';
  }
  
  //printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
  return 0;
}
