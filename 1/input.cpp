#include"det.h"
void Determinant::Input() {
	int i, j;
	cout << "��������";
	cin >> n;
	cout << endl << "��������ʽ��" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "s[" << i << "][" << j << "]:";
			cin >> s[i][j];
		}
	cout << "ԭʽ��" << endl;
	kinglesshappy();
}