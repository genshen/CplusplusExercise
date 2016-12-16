//use do-while statement to calculate the sum of all odd from 1 to 100
#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0; //some bad ideas:i or sum did'n initialize
    do
    {
        sum += i;
    } while ((i += 2) < 100);

    cout << sum; //anwser: 2500
    return 0;
}