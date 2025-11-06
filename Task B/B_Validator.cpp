#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]){
    registerValidation(argc,argv);
    int t = inf.readInt(1, 10'000, "~t");
    inf.readEoln();
    int sn = 0;
    for(int i=1; i<=t; i++) {
        setTestCase(i);
        int n = inf.readInt(1, 100'000, "n");
        inf.readEoln();
        inf.readInts(n, 1, 10'000, "a");
        inf.readEoln();
        sn += n;
        ensuref(sn <= 200'000, "sum of n <= 200000 must hold");
    }
    inf.readEof();
}
