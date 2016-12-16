#include <iostream>
using namespace std;
int main()
{
    for (int i = 100; i <= 200; i++)
    {                                               //you can also use i += 7 to replace i++;
        if (i % 7 == 2 && i % 5 == 3 && i % 3 == 2) //先判断模7,最后判断模3可以减少一点计算量(但这不是很重要)
        {
            cout << i << endl;
        }
    }
    //answer: 128
    return 0;
}