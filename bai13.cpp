#include <iostream>
#include <fstream>

using namespace std;

void insertData(int qty)
{

    cin >> qty;

    string name[qty];
    ofstream fout;
    fout.open("./test.txt");
    fout << qty;
    cout << "\t NHAP VAO TEN SINH VIEN" << endl;
    for (int i = 0; i < qty; i++)
    {
        cout << "nhap ten sinh vien thu " << (i + 1) << ": ";
        getline(cin, name[i], '.');
        fout << name[i];
    }
}
string showAll(int qty)
{
    string name[qty];
    int soSinhVien;
    ifstream fin;
    string students = "";
    fin.open("/var/www/html/c_basic/test.txt");
    fin >> soSinhVien;
    if (soSinhVien >= qty - 1)
    {
        for (int i = 0; i < qty; i++)
        {
            getline(fin, name[i]);
            if (i > 0)
            {
                students += name[i] + ", ";
            }
        }
    }
    else
    {
        students = "NaN";
    }
    return students;
}
int main()
{
    int qty;
    int list;
    // cout << "nhap vao so sinh vien: ";
    // insertData(qty);
    cout << "nhap vao so sinh vien muon hien thi: ";
    cin >> list;
    string students = showAll(list + 1);
    cout << "\t DANH SACH SINH VIEN" << endl;
    cout << students << endl;
}