#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

struct  wh {
	char name[20];//���������
	double x;//�������
};

int main() {
	using namespace std;
	int e;

	cout << "���������";
	cin >> e;//�������
	wh * fp = new wh[e];

	for (int i = 0; i < e; i++) {
		cout << "���֣�";
		cin >> fp[i].name;
		cout << "���";
		cin	>> fp[i].x;
	}
	cout << "�ش�����"<< endl;
	for (int i = 0; i < e; i++) {
		if (fp[i].x > 10000) {
			cout << fp[i].name << "����" << endl << fp[i].x << "�����";
		}
	}
	cin.get();
	cin.get();
	return 0;
}