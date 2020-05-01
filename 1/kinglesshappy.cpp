#include"det.h"
void Determinant::kinglesshappy() {
	for (int i = 0; i < n; i++) {
		cout << "|";
		for (int j = 0; j < n; j++)
			cout << setw(8) << s[i][j];
		cout << "    |" << endl;
	}
	cout << endl;
}