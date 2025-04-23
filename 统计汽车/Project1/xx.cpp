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
    cout << "你的汽车数量：";
    cin >> n;

    car *sum = new car[n];


    for (int i = 0; i < n; i++) {
        cout << "汽车的品牌：";
        cin >> sum[i].x;
        cout << "生产的年份：";
        cin >> sum[i].y;
    }
    for (int i = 0; i < n; i++) {
        cout << sum[i].x << sum[i].y << endl;
    }
    return 0;
}