#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    double x;
    while(cin>>x){
        if(x<=100&&x>=90){
            cout << "A\n";
        }else if(x<=89&&x>=80){
            cout << "B\n";
        }else if(x<=79&&x>=70){
            cout << "C\n";
        }else if(x<=69&&x>=60){
            cout << "D\n";
        }else if(x<=59&&x>=0){
            cout << "E\n";
        }else{
            cout << "Score is error!\n";
        }
    }
    system("pause");
    return 0;
}