#include <iostream>

using namespace std;

int main() {

    signed int a = -10;     // signed�� ������ ����� ��� �����ϰ� �ִ�
    cout << a << endl;

    unsigned int b = 10;   // unsigned�� ���� ����� ���� ���� �� �ִ�
    cout << b << endl;

    // overflow

    signed int value = 2147483647;  // ��ȣ�ִ� ������ �ִ밪�� 2,147,483,647�̴�
    cout << value << endl;
    
    value = value + 1;  // // 2,147,483,647�� +1�� �ϸ� 
    cout << value << endl;  // ?2,147,483,648�� ��µǸ� ���� �ջ�ȴ�
    
    return 0;
}