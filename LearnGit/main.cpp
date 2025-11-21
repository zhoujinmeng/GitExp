#include <iostream>
#include "add.h"
int main() {
    int x = 3, y = 4;
    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << y << "-" << x << "=" << sub(y,x) << std::endl;  // ����
    cout << "This is a change from zhou." << endl;
    return 0;
}