#include "hit.h"
int  lzh2()
{
	int a[11][11], b[11][11], c[11][11] = { 0 }, i, j, m, s;
	cout << "请输入矩阵的行数和列数:" << endl;
	cin >> m >> s;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= s; j++)
		{
			cout << "a[" << i << "][" << j << "]:";
			cin >> a[i][j];
		}
	for (i = 1; i <= m; i++)
		for (j = 1; j <= s; j++)
		{
			cout << "b[" << i << "][" << j << "]:";
			cin >> b[i][j];
		}
	cout << "两个矩阵分别是：" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= s; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
	cout << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= s; j++)
			cout << b[i][j] << '\t';
		cout << endl;
	}
	for (i = 1; i <= m; i++)
		for (j = 1; j <= s; j++)
			c[i][j] = a[i][j] + b[i][j];
	cout << "两个矩阵相加为：" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= s; j++)
			cout << c[i][j] << '\t';
		cout << endl;
	}
	system("pause");
	return 0;
}