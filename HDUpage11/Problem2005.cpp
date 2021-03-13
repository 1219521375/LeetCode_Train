#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int year, month, day;
    int isLeap = 0;
    int sumday = 0;
    int curmon = 1;
    char op1, op2;
    while(cin>>year>>op1>>month>>op2>>day){
        sumday = 0;
        curmon = 1;
        isLeap = 0;
        if((year %4 == 0&&year%100!=0)||year%400==0){
            isLeap = 1;
        }
        while(curmon < month){
            if(curmon == 1||curmon == 3||curmon == 5||curmon == 7||curmon == 8
                ||curmon == 10||curmon == 12){
                sumday += 31;
            }
            if(curmon == 4||curmon == 6||curmon == 9||curmon == 11){
                sumday += 30;
            }
            if(curmon == 2){
                sumday += 28;
                sumday += isLeap;
            }
            curmon++;
        }
        sumday += day;
        printf("%d\n", sumday);
    }
    system("pause");
    return 0;
}