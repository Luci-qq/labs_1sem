
#include <math.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>


using namespace std;
int fact(int d) {
    int res = 1;
    for (int i=0; i <= d; i++) {
        if (i == 0) {
            res = res * 1;
        }
        else { res = res * i; }
    }
    return res;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, h, n, x, y, sum, a1;
    cout << "Введите a,b,h,n" << "\n";
    cin >> a >> b >> h >> n;
    cout << endl << setw(15) << left << "При x:" << setw(25) << "Значение функции:" << setw(35) << " Сумма:";
    for (x=a; x <= b; x+=h) {
        sum = 0;
        y = (pow(x,2.0)/4.0 + x/2.0 + 1)*exp(x/2.0);
        for (int k = 0; k <= n; k++) {
            a1 = ((pow(k, 2) + 1) / fact(k)) * pow((x / 2.0), k);
            sum += a1;
        }
        cout << endl << setw(20) << left << x << setw(20) << y << setw(20) << sum;
    };

    };     

    