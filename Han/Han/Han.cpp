#include <iostream>
#include <clocale>
using namespace std;

void Han(int n, int start, int point, int temp) {
	if (n != 0) {
		Han(n - 1, start, temp, point);
		cout << start << "=>" << point << endl;
		Han(n - 1, temp, point, start);
	}
}

int  main() {
	setlocale(LC_ALL, "russian");
	int n;
	cout << "Введите количество дисков: ";
	cin >> n;
	Han(n, 1, 3, 2);
	return 0;
}