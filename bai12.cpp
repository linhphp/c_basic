#include <iostream>
#include <fstream>
// xu ly file trong c++
using namespace std;

int main()
{
    int n;
    char point[100];
    int result = 0;

    ifstream outFile;
    outFile.open("/var/www/html/c_basic/data.txt");
    outFile >> n;
    cout << "so luong dap an la " << n << endl;

    for (int i = 0; i < n; i++)
    {
        outFile >> point[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << point[i] << endl;
        if (point[i] == point[i - 1])
        {
            result++;
        }
    }
    cout << "co " << result << " dap an dung" << endl;
}