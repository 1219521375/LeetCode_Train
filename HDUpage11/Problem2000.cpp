#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * Alt+Shift+F可以格式化代码
 * Ctrl+Shift+B单纯编译
 * F5为编译加调试
*/

int main()
{
    char a, b, c;
    vector<char> letters;
    while(cin>>a>>b>>c){
        letters.push_back(a);
        letters.push_back(b);
        letters.push_back(c);
        sort(letters.begin(), letters.end());
        cout << letters[0] << " " << letters[1] << " " << letters[2] << "\n";
        letters.clear();
    }
    system("pause");
    return 0;
}