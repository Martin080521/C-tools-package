//程序计时
#include <ctime>
#include <iostream>
using namespace std;
int main(){
    clock_t time;
    cout << double(time) / CLOCKS_PER_SEC;
}