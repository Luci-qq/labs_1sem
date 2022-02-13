#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int length = 0;
    cin >> length;
    vector <int> arr;
    int tmp;
    for (int i = 0; i < length; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }
    int index=0;
    int rez=1;
    for (int i = 0; i < length; i++) {
        if (arr[i] == 0) {
            index = i;
            break;
        }
    }
    for (int i = 0; i < length; i++) {
        cout << arr[i]<< " ";
    }
    cout << endl;
    for (int i = 0; i < index; i++) {
        rez = rez * arr[i];
    }
    cout << rez;
}

