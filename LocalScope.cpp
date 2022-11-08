#include <iostream>

using namespace std;

int add(int x, int y) {
    return x * y;   // add 함수의 변수 x와 y는 return문을 벗어나면 파괴된다
}

int main() {

    int a = 10; // main 함수의 변수 a는 여기서 생성
    int b = 20; // main 함수의 변수 b는 여기서 생성

    cout << add(a, b) << endl;

    return 0;
    
}