#include "hit.h"
int  lzh3()
{
	int a[11][11], b[11][11], c[11][11] = { 0 }, i, j, k, m, n, s;
	cout << "请输入第一个矩阵的行数和列数:" << endl;
	cin >> m >> s;
	cout << "请输入第二个矩阵的列数:" << endl;
	cin >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= s; j++)
		{
			cout << "a[" << i << "][" << j << "]:";
			cin >> a[i][j];
		}
	for (i = 1; i <= s; i++)
		for (j = 1; j <= n; j++)
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
	for (i = 1; i <= s; i++)
	{
		for (j = 1; j <= n; j++)
			cout << b[i][j] << '\t';
		cout << endl;
	}
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			for (k = 1; k <= s; k++)
				c[i][j] += a[i][k] * b[k][j];
	cout << "两个矩阵相乘为：" << endl;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << c[i][j] << '\t';
		cout << endl;
	}
	system("pause");
	return 0;
}
