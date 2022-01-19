//进制转换（10进制转多进制）
#include <iostream>
using namespace std;

string Base_Conversion(int num,int base){
    string str;
    while(num >= base){
        if (num % base >= 10){
            char ch = char(int(num % base - 10) + 'A');
            string x(1,ch);
            str = x + str;
        }else{ 
            str = to_string(num % base) + str;
        }
        num /= base;
    }
    if (num >= 10){
        char ch = char(int(num % base - 10) + 'A');
        string x(1, ch);
        str = x + str;
    }else{
        str = to_string(num % base) + str;
    }
    return str;
}

int main(){
    int num,base;
    cin >> num >> base;
    cout << Base_Conversion(num,base);
}