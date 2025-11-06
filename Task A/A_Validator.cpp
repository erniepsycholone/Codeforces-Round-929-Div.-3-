#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]){
    registerValidation(argc,argv);
    int t = inf.readInt(1, 1'000, "~t");
    inf.readEoln();
    for(int i=1; i<=t; i++) {
        setTestCase(i);
        int n = inf.readInt(1, 50, "n");
        inf.readEoln();
        inf.readInts(n, -100, 100, "a");
        inf.readEoln();
    }
    inf.readEof();
}