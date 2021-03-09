#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;
#define PI 3.1415927

int main(){
    double r;
    double v;
    while(cin>>r){
        v = PI * r * r * r * 4 / 3;
        printf("%.3f\n", v);
    }
    system("pause");
    return 0;
}