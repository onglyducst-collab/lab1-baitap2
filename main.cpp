#include <iostream>
#include <cmath>
using namespace std;

/*
    Hàm UCLN
    Chức năng: tìm ước chung lớn nhất của hai số nguyên bằng thuật toán Euclid
    Đầu vào: a, b hai số nguyên
    Đầu ra: giá trị ước chung lớn nhất của a và b
*/

int UCLN (int a, int b){
    a = abs(a);
    b = abs(b);
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

/*
    Cấu trúc phanso
    Chức năng: lưu trữ một phân số gồm tử số và mẫu số
*/

struct phanso{
    int tu;
    int mau;
};

/*
    Hàm main
    Chức năng: nhập hai phân số, so sánh chúng và in ra phân số lớn hơn sau khi rút gọn.
    Đầu vào: hai phân số (tử số và mẫu số)
    Đầu ra: phân số lớn nhất
*/

int main()
{
    phanso ps1, ps2;
    cin >> ps1.tu >> ps1.mau >> ps2.tu >> ps2.mau;

    if (ps1.mau == 0 || ps2.mau == 0){
        cout << "Mau so khong hop le";
        return 0;
    }

    if (ps1.mau < 0){
        ps1.tu = -ps1.tu;
        ps1.mau = -ps1.mau;
    }

    if (ps2.mau < 0){
        ps2.tu = -ps2.tu;
        ps2.mau = -ps2.mau;
    }

    int a = ps1.tu * ps2.mau;
    int b = ps2.tu * ps1.mau;

    if (a >= b){
        int c = UCLN(ps1.tu, ps1.mau);
        ps1.tu /= c;
        ps1.mau /= c;
        cout << ps1.tu << "/" << ps1.mau;
    }
    else{
        int c = UCLN(ps2.tu, ps2.mau);
        ps2.tu /= c;
        ps2.mau /= c;
        cout << ps2.tu << "/" << ps2.mau;
    }

    return 0;
}
