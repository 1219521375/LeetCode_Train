#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int res = 1;
    int num,curnum;
    vector<int> nums;
    while(scanf("%d",&num) != EOF){
        res = 1;
        for (int i = 0; i < num;i++){
            scanf("%d", &curnum);
            nums.push_back(curnum);
        }
        for (int i = 0; i < num;i++){
            if(nums[i] % 2 == 1){
                res *= nums[i];
            }
        }
        printf("%d\n", res);
        nums.clear();
    }
    system("pause");
    return 0;
}