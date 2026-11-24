#include <iostream>
using namespace std;

int addition(int x, int y, int z) {
    return x + y + z;
}

int main() {
    int a, b ,c, sum;
    a = 10;
    b = 5;
    c = 20;

    sum = addition(a, b, c); //function call with arguments a, b, and c
    cout << "The sum of a, b , and c is :" << sum << endl;

    return 0;

}