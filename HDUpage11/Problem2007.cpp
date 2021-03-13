#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    long int m,n,t;
    long int ou, ji;
    while(scanf("%ld%ld",&m,&n) != EOF){
        if(m > n){
            t = m;
            m = n;
            n = t;
        }
        ou = 0, ji = 0;
        for (int i = m; i <= n;i++){
            if(i % 2 == 0){
                ou += pow(i, 2);
            }else{
                ji += pow(i, 3);
            }
        }
        printf("%ld %ld\n", ou, ji);
    }
    system("pause");
    return 0;
}