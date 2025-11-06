#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]){
    registerValidation(argc,argv);
    int t = inf.readInt(1, 10000, "t");
    inf.readEoln();
    int sn=0;
    for(int i=1; i<=t; i++) {
        setTestCase(i);
        int n = inf.readInt(3, 1000, "n");
        inf.readSpace();
        int m = inf.readInt(3, 1000, "m");
        inf.readEoln();
        vector<vector<int>> A(n);
        for(int i=0;i<n;i++){
            A[i] = inf.readInts(m, 0, 1, "a");
            inf.readEoln();
        }
        ensuref(A[0][0] == 0, "The cell (0, 0) has rock");
        for(int i = 0; i < n; ++i){
            ensuref(A[i][m - 1] == 0, "The cell (%d, %d) has rock", i, m-1);
        }
        sn+=n*m;
        ensuref(sn <= 1'000'000, "sum of nm <= 1000000 must hold");
    }
    inf.readEof();
}