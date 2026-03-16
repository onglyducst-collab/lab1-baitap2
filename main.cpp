#include <iostream>
#include <cmath>
using namespace std;

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

struct phanso{
    int tu;
    int mau;
};

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
