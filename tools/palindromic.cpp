//回文字符串判定
#include <iostream>
using namespace std;

bool Palindromic(string str){
    for (int i = 0;i <= str.size() / 2;i++){
        if (str[i] != str[str.size() - 1 - i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cin >> str;
    cout << Palindromic(str);
}