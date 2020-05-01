#include "det.h"
void kinglesshappy2(float temp[9][9], int i, int j, int n) {
	cout << "R" << i + 1 << "<-->R" << j + 1 << endl;
	for (int m = 0; m < n; m++) {
		temp[i][m] += temp[j][m];
		temp[j][m] = temp[i][m] - temp[j][m];
		temp[i][m] -= temp[j][m];
	}
}