#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

struct car {
    char x[10];
    int y;
};

int main() {
    using namespace std;
    int n;
    cout << "�������������";
    cin >> n;

    car *sum = new car[n];


    for (int i = 0; i < n; i++) {
        cout << "������Ʒ�ƣ�";
        cin >> sum[i].x;
        cout << "��������ݣ�";
        cin >> sum[i].y;
    }
    for (int i = 0; i < n; i++) {
        cout << sum[i].x << sum[i].y << endl;
    }
    return 0;
}