#include <iostream>
#include <string.h>

using namespace std;

int main() {

    // ���ͷ�(literal) �ڵ忡 ���� ���Ե� ���̴�. �� ����̴�.
    int x = 10; 
    int oper = 10 + 20;
    
    string str = "Hello World"; // #include <string.h>�� ��������� �Ѵ�

    // ���� �� ���� �Է¹޾� ��Ģ���� ����
    int n1, n2;

    cout << "�� ���� ���� �Է�: " << endl;
    cin >> n1 >> n2;

    cout << "+: " << n1 + n2 << endl;
    cout << "-: " << n1 - n2 << endl;
    cout << "��: " << n1 * n2 << endl;
    cout << "��: " << n1 / n2 << endl;

    return 0;
}