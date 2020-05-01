#pragma once
//define det
#include<iostream>
#include<iomanip>
using namespace std;
//By Vove.

class Determinant {

public:
	Determinant() {
		n = 9;
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				s[i][j] = 0;

	}
	void kinglesshappy();
	bool kinglesshappy3();
	void Input();
	void Out_result();

private:
	int n;
	float s[9][9];
	float result;
};

int Find(float temp[9][9], int i, int n);
void kinglesshappy2(float temp[9][9], int i, int j, int n);

