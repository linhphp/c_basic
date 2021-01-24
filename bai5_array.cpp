#include <iostream>

using namespace std;

void tinhtong()
{
    int a = 5;
    int array[a] = {1, 3, 8, 2, 7};
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += array[i];
    }
    cout << "tong can nang la: " << sum << endl;
}

int main()
{
    tinhtong();
}
