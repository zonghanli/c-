#include "det.h"
bool Determinant::kinglesshappy3() {

	for (int i = 0; i < n - 1; i++) {
		if (s[i][i]) {//对角线元素不为0
			if (s[i][i] != 1.0)
				if (int j = Find(s, i, n)) { kinglesshappy2(s, i, j, n); kinglesshappy(); }
			for (int m = i + 1; m < n; m++) {
				if (s[m][i]) {
					float temp = -(s[m][i]) / s[i][i];
					for (int p = 0; p < n; p++) {//R(m)+tempRi
						s[m][p] = s[m][p] + temp * s[i][p];
					}
					if (temp > 0)
						cout << "R" << m + 1 << "+" << temp << "R" << i + 1 << ":" << endl;
					else
						cout << "R" << m + 1 << temp << "R" << i + 1 << ":" << endl;
					kinglesshappy();
				}
				else continue;
			}
		}

		else {//若对角线元素为0
			int m;
			for (m = i + 1; m < n; m++) {//
				if (s[m][i]) {//使对角线元素非0
					for (int p = 0; p < n; p++)//Ri+Rm
						s[i][p] = s[m][p] + s[i][p];
					break;
				}
				else continue;
			}
			if (m == n) {
				result = 0;
				return true;
			}
			cout << "R" << i + 1 << "+" << "R" << m + 1 << endl;
			kinglesshappy();
			i--;
		}
	}
	int i;
	float sum = s[0][0];
	for (i = 1; i < n; i++)
		sum = sum * s[i][i];
	result = sum;
	return true;
}
int Find(float temp[9][9], int i, int n) {
	for (int m = i + 1; m < n; m++)
		if (temp[m][i] == 1.0)
			return m;
	return 0;
}