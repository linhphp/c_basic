#include <iostream>

using namespace std;

int main()
{
    string name, tenBanBen;
    cout << "Nhap ten cua ban: ";
    getline(cin, name);
    cout << "Nhap ten ban ben: ";
    //Nguyen
    getline(cin, tenBanBen);
    cout << "Chao mung: " << name << " va ban " << tenBanBen << endl;
}
