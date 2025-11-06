#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]){
    registerValidation(argc,argv);
    int t = inf.readInt(1, 1000, "t");
    inf.readEoln();
    int sumq = 0;
    for(int i=1; i<=t; i++) {
        setTestCase(i);
        int n = inf.readInt(5, 1'000'000'000, "n");
        inf.readSpace();
        int m = inf.readInt(5, 1'000'000'000, "m");
        inf.readSpace();
        long long max_q = n;
        max_q *= m;
        max_q = min(max_q, 100'000ll);
        int q = inf.readLong(0, max_q, "q");
        sumq += q;
        ensuref(sumq <= 100'000, "sum of q over all tests <= 100'000");
        inf.readEoln();
        map<pair<int,int>,bool> mp;
        while(q--) {
            int r,c;
            r = inf.readInt(1, n, "r");
            inf.readSpace();
            c = inf.readInt(1, m, "c");
            inf.readSpace();
            ensuref(!mp.count({r, c}), "repeated cell %d %d", r, c);
            mp[{r, c}] = 1;
            string shape = inf.readToken("circle|square", "shape");
            ensuref(shape == "circle" || shape == "square", "shape must be circle or square");
            inf.readEoln();
        }
    }
    inf.readEof();
}
