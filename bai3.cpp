// bai so ba
#include<iostream>

using namespace std;

int main() {
    string name = "Thuc Linh";
    float a, b;
    float c;
    a = 10;
    b = 9;
    c = (a + b) / 2;
    cout<< "Gia tri trung binh cua"<< a << " va " << b << " = " << c <<endl;
    // nhap a b c  va giai phuong trinh bac nhat;
    // ax + b = 0;
    cout<<"Nhap so thu nhat:" <<endl;
    cin>>a;
    cout<<"Nhap vao so thu hai:" <<endl;
    cin>>b;
    if(a == 0) {
        if(b == 0) {
            cout<<"Phuong trinh vo so nghiem" <<endl;
        }
        else if(b != 0) {
            cout<<"Phuong trinh vo nghiem" <<endl;
        }
    }
    else if(a != 0) {
        c = -b / a;
        cout<<"Phuong trinh co nghiem x la: " << c <<endl;
    }
}