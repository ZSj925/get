#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

struct  wh {
	char name[20];//捐款人名字
	double x;//捐款数额
};

int main() {
	using namespace std;
	int e;

	cout << "捐款人数：";
	cin >> e;//捐款人数
	wh * fp = new wh[e];

	for (int i = 0; i < e; i++) {
		cout << "名字：";
		cin >> fp[i].name;
		cout << "数额：";
		cin	>> fp[i].x;
	}
	cout << "重大贡献者"<< endl;
	for (int i = 0; i < e; i++) {
		if (fp[i].x > 10000) {
			cout << fp[i].name << "先生" << endl << fp[i].x << "人民币";
		}
	}
	cin.get();
	cin.get();
	return 0;
}