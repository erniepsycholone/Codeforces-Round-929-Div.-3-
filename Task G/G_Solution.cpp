#include "bits/stdc++.h"
using namespace std;

void solve(int tc) { 
  int n, m, q;
  cin >> n >> m >> q;
  bool b[8] = {1, 1, 1, 1, 1, 1, 1, 1};
  int ans = 8;
  cout << ans << '\n';
  while(q--) {
    int r, c;
    cin >> r >> c;
    string shape;
    cin >> shape;
    if((r + (c+1) / 2) % 2) {
      b[0] &= (shape == "circle");
      b[1] &= (shape == "square");
    }
    else {
      b[0] &= (shape == "square");
      b[1] &= (shape == "circle");
    }
    if((r + c / 2) % 2) {
      b[2] &= (shape == "circle");
      b[3] &= (shape == "square");
    }
    else {
      b[2] &= (shape == "square");
      b[3] &= (shape == "circle");
    }

    if((c + (r+1) / 2) % 2) {
      b[4] &= (shape == "circle");
      b[5] &= (shape == "square");
    }
    else {
      b[4] &= (shape == "square");
      b[5] &= (shape == "circle");
    }
    if((c + r / 2) % 2) {
      b[6] &= (shape == "circle");
      b[7] &= (shape == "square");
    }
    else {
      b[6] &= (shape == "square");
      b[7] &= (shape == "circle");
    }
    ans = 0;
    for(int i = 0; i < 8; i++) ans += b[i];
    cout << ans << '\n';
  }
}

int main() {
  int t; 
  cin >> t;
  for(int i = 1; i <= t; i++) solve(i);
}