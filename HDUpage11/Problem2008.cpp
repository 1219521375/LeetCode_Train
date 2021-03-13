#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int n;
    double curnum;
    int nega, zero, posi;
    while(scanf("%d",&n) != EOF){
        if(n == 0)
            continue;
        nega = 0, zero = 0, posi = 0;
        for (int i = 0; i < n;i++){
            scanf("%lf", &curnum);
            if(curnum > 0){
                posi++;
            }else if(curnum < 0){
                nega++;
            }else{
                zero++;
            }
        }
        printf("%d %d %d\n", nega, zero, posi);
    }
    system("pause");
    return 0;
}