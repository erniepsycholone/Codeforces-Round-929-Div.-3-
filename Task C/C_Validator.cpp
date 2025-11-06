#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]){
    registerValidation(argc,argv);
    int t = inf.readInt(1, 10'000, "~t");
    inf.readEoln();
    for(int i=1; i<=t; i++) {
        setTestCase(i);
        int a = inf.readInt(2, 100, "a");
        inf.readSpace();
        int b = inf.readInt(2, 100, "b");
        inf.readSpace();
        int l = inf.readInt(1, 1'000'000, "l");
        inf.readEoln();
        
    }
    inf.readEof();
}
