#include <iostream>
using namespace std;
/**
 * Alt+Shift+F可以格式化代码
 * Ctrl+Shift+B单纯编译
 * F5为编译加调试
*/
int reverse(int x)
{
    
    int isNega = 0;
    if (x < 0)
    {
        isNega = 1;
        x = 0 - x;
    }
    cout << isNega;
    cout << '\n';
    long resnum = 0;
    int num[10] = {0,0,0,0,0,0,0,0,0,0,};
    int res[10] = {0,0,0,0,0,0,0,0,0,0,};
    //-2147483648~2147483647  10

    int d = 1000000000;
    int i = 0, lenth = 0;
    for (i = 0; i < 10; i++)
    { //获取每一位的数值
        num[i] = x / d;
        x = x % d;
        d = d / 10;
        cout << num[i];  //ok
    }
    cout << "\n";
    for (i = 0; i < 10; i++)
    {
        if (num[i] != 0)
            break;
        lenth++; //10位中有多少无用0   10-lenth == 实际位数
    }
    int actlen = 10 - lenth;
    for (i = actlen - 1; i >= 0; i--)
    {
        res[i] = num[lenth];
        lenth++;
    }
    for (i = 0; i < 10;i++)
        cout << res[i];   //ok
    cout << "\n";
    long long dd = 1;
    for (i = 0; i < actlen-1;i++)
        dd *= 10;
    cout << dd;
    cout << '\n';
    long temp = 0;
    for (i = 0; i < actlen; i++)
    {
        temp = res[i];
        resnum += temp * dd;
        cout << resnum;
        cout << '\n';
        dd /= 10;
    }
    if (isNega == 1)
        resnum = 0 - resnum;
    return resnum;
}
int main()
{
    cout << '\n';
    cout << reverse(-2147483648);
    long long i = 1000000000;
    long long j = 9;
    //cout << i*9;
    system("pause");
    return 0;
}