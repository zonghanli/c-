#include "hit.h"
int  lzh1()
{
	int a[11][11], c[11][11] = { 0 }, i, j, m, s, w;
	cout << "��������������!����!��!" << endl;
	cin >> m >> s >> w;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= s; j++)
		{
			cout << "a[" << i << "][" << j << "]:";
			cin >> a[i][j];
		}
	cout << "�������ֱ��ǣ�" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= s; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
	cout << endl;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= s; j++)
			c[i][j] = w * a[i][j];
	cout << "�����������Ϊ��" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= s; j++)
			cout << c[i][j] << '\t';
		cout << endl;
	}
	system("pause");
	return 0;
}