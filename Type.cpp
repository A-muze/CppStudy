#include <iostream>

// void 타입은 반환하는 값이 없다는 것을 말한다

using namespace std;

void void_function(int n1) {    // void는 리턴 값이 없음을 나타낸다.
    cout << "Value of n1: " << n1 << endl;
}

int main() {

    void_function(10);
    
    return 0;
}