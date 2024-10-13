#include <iostream>
#include <math.h>
using namespace std;

struct vector{
    int n = 3;
    double *val {new double[n]};
};

vector add(vector x, vector y){
    vector s;
    for (int i = 0; i < x.n; i++){
        s.val[i] = x.val[i] + y.val[i];
    }
    return s;
}

vector multiply(vector x, double y){
    vector s;
    for (int i = 0; i < x.n; i++){
        s.val[i] = x.val[i] * y;
    }
    return s;
}

double dotproduct(vector x, vector y){
    double s = 0;
    for (int i = 0; i < x.n; i++){
        s += x.val[i] * y.val[i];
    }
    return s;
}