//
// Created by gensh on 2016/12/16.
//
#include <iostream>

using namespace std;

int main() {
    // XYZ+YZZ=532
    for (int x = 0; x <= 5; x++) {
        for (int y = 0; y <= 5; y++) {
            for (int z = 0; z <= 9; z++) {
                if (100 * x + 10 * y + z + 100 * y + 10 * z + z == 532) {
                    cout << "x:" << x << " y:" << y << " z:" << z << endl;
                }
            }
        }
    }
    //answer: x = 3; y = 2; z = 1
    return 0;
}