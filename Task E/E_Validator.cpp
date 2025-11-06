#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]){
    registerValidation(argc,argv);
    int t = inf.readInt(1, 10'000, "~t");
    inf.readEoln();
    int sumN = 0, sumQ = 0;
    for(int i=1; i <= t; i++) {
        setTestCase(i);
        int n = inf.readInt(1, 100'000, "n");
        inf.readEoln();
        sumN += n;
        ensuref(sumN <= 200'000, "sumN > 200'000");
        inf.readInts(n, 1, 10'000, "a");
        inf.readEoln();
        int q = inf.readInt(1, 100'000, "q");
        inf.readEoln();
        sumQ += q;
        ensuref(sumQ <= 200'000, "sumQ > 200'000");
        for(int j=1; j <= q; j++) {
            int l = inf.readInt(1, n, "l");
            inf.readSpace();
            int u = inf.readInt(1, 1000'000'000, "u");
            inf.readEoln();
        }
    }
    inf.readEof();
}
