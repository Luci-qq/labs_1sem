#include <math.h>
#include <iostream>
#include <random>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru");
    system("color a");
    srand(time(NULL));
    int size = 0;
    int min_elm = 0;
    int counter = 0;
    int res = 0;
    int selector = 0;;
    cout << "Выберите способ задания массива: " << endl;
    cout << "1 - заполнение случайными числами" << endl;
    cout << "2 - заполнение массива вручную" << endl;
    cin >> selector;
    cout << "Введите размер: "<< endl;
    cin >> size;
    int *mas  = new int[size];
    if (selector == 1) {
        for (int i = 0; i < size; i++) {
            mas[i] = rand()%100+1;
            cout << mas[i] << " ";
       }
        cout << endl;
    }
    else if (selector == 2) {
        for (int i = 0; i < size; i++) {
            cin >> mas[i];
        };
    }
    min_elm = mas[0];
    for (int i = 0; i < size; i++) {
        if (min_elm >= mas[i]) {
            min_elm = mas[i];
            counter = i;
        }
    };
    for (int i = counter+1; i < size; i++) {
        res += mas[i];
    }
    cout << "Минимальный элемент: " << min_elm << endl;
    cout << "Номер элемента: " << counter+1 << ",Индекс элемента: "<< counter << endl;
    cout << "Сумма всех значений после минимального элемента: "<<res<<endl;
    
}

