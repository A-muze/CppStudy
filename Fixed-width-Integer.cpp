#include <iostream>
#include <cstdint>

/*
    cstdint�� ����ϸ� �ڷ����� ũ�⸦ ��Ȯ�ϰ� ������ �� �ִ�
*/

using namespace std;

int main() {


    // intN_t ���� �����Ѵ�
    int16_t i = -32768;
    cout << i << endl;

    // uintN_t �� ��ȣ ���� �����̴�
    uint16_t j = 65535;
    cout << j << endl;

    return 0;
}