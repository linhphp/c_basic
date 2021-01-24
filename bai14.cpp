#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int n;

    ifstream dapAn;
    dapAn.open("./dapAn.txt");
    dapAn >> n;
    char hanh[n];
    char nhaTruong[n];
    int point = 0;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        dapAn >> hanh[i];
    }
    for (int i = 0; i < (n); i++)
    {
        dapAn >> nhaTruong[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (hanh[i] == nhaTruong[i])
        {
            point++;
        }
    }
    cout << point << endl;
}