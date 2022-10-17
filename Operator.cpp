#include <iostream>
#include <string.h>

using namespace std;

int main() {

    // 리터럴(literal) 코드에 직접 삽입된 값이다. 즉 상수이다.
    int x = 10; 
    int oper = 10 + 20;
    
    string str = "Hello World"; // #include <string.h>를 선언해줘야 한다

    // 숫자 두 개를 입력받아 사칙연산 수행
    int n1, n2;

    cout << "두 개의 숫자 입력: " << endl;
    cin >> n1 >> n2;

    cout << "+: " << n1 + n2 << endl;
    cout << "-: " << n1 - n2 << endl;
    cout << "×: " << n1 * n2 << endl;
    cout << "÷: " << n1 / n2 << endl;

    return 0;
}