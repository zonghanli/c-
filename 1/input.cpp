#include"det.h"
void Determinant::Input() {
	int i, j;
	cout << "行列数：";
	cin >> n;
	cout << endl << "输入行列式：" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "s[" << i << "][" << j << "]:";
			cin >> s[i][j];
		}
	cout << "原式：" << endl;
	kinglesshappy();
}