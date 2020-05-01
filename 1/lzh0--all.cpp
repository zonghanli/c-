#include"hit.h"
#include"det.h"
#pragma warning(disable:4996)
int main()
{
	int n = 0; //阶数
	int i = 0; //阶数
	int answer;
	cout << "欢迎来到宗翰的矩阵实验室！\n" <<
		"1.number\n" <<
		"2.add\n" <<
		"3.multiply\n" <<
		"4.detaminate" << endl;
	cout << "please choose your number: ";
	cin >> answer;
	// choose 
	if (answer >= 5)
		cout << "wrong！！ \n" <<
		"再来吧 ！ ";
	if (answer == 1)
	{
		cout << "\t\t\t-------矩阵数乘--------" << endl << endl;
		lzh1();
	}
	if (answer == 2)
	{
		cout << "\t\t\t-------矩阵加法--------" << endl << endl;
		lzh2();
	}
	if (answer == 3)
	{
		cout << "\t\t\t-------矩阵乘法--------" << endl << endl;
		lzh3();
	}
	if (answer == 4)
	{
		{
			cout << "\t\t\t-------行列式计算--------" << endl << endl;
			 {
				Determinant D;
				D.Input();
				D.kinglesshappy3();
				D.Out_result();
			}
			 system("pause");
			return 0;
		}
		
	}
	


}