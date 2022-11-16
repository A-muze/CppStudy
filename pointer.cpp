#include <iostream>

using namespace std;

int swap(int *x, int *y) {
    
    int temp = *x;
    *x = *y;
    *y = temp;
    
    cout << "X: " << *x << endl;
    cout << "y: " << *y << endl;

}

int main() {
 
    int x = 10;
    int y = 20;

    swap(&x, &y);

    return 0;
}