#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    float x1, y1, x2, y2;
    float x, y;
    float len;
    while(cin>>x1>>y1>>x2>>y2){
        x = abs(x1 - x2);
        y = abs(y1 - y2);
        len = sqrt(x * x + y * y);
        printf("%.2f\n", len);
    }
    system("pause");
    return 0;
}