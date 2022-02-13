

#include <iostream>
#include <math.h>
#include <iomanip>
#include <string.h>


using namespace std;




double fun1(double x) {
    return (pow(x, 2.0) / 4.0 + x / 2.0 + 1) * exp(x / 2.0);
};

int fact(int d) {
    int res = 1;
    for (int i = 0; i <= d; i++) {
        if (i == 0) {
            res = res * 1;
        }
        else { res = res * i; }
    }
    return res;
};

void OUT_rez(double a,double b,double h,double n) {
    double a1,x,y,sum;
    cout << endl << setw(15) << left << "При x:" << setw(25) << "Значение функции:" << setw(20) << "Сумма:"<<setw(30)<<"Разность:";
    for (x = a; x <= b; x += h) {
        sum = 0;
        y = fun1(x);
        for (int k = 0; k <= n; k++) {
            a1 = ((pow(k, 2) + 1) / fact(k)) * pow((x / 2.0), k);
            sum += a1;
        };
        cout << endl << setw(20) << left << x << setw(20) << y << setw(20) << sum << setw(20) << fabs(y-sum);
    };
};


int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, h, n;
    cin >> a >> b >> h >> n;
    OUT_rez(a, b, h, n);
}
