#include"hit.h"
#include"det.h"
#pragma warning(disable:4996)
int main()
{
	int n = 0; //����
	int i = 0; //����
	int answer;
	cout << "��ӭ�����ں��ľ���ʵ���ң�\n" <<
		"1.number\n" <<
		"2.add\n" <<
		"3.multiply\n" <<
		"4.detaminate" << endl;
	cout << "please choose your number: ";
	cin >> answer;
	// choose 
	if (answer >= 5)
		cout << "wrong���� \n" <<
		"������ �� ";
	if (answer == 1)
	{
		cout << "\t\t\t-------��������--------" << endl << endl;
		lzh1();
	}
	if (answer == 2)
	{
		cout << "\t\t\t-------����ӷ�--------" << endl << endl;
		lzh2();
	}
	if (answer == 3)
	{
		cout << "\t\t\t-------����˷�--------" << endl << endl;
		lzh3();
	}
	if (answer == 4)
	{
		{
			cout << "\t\t\t-------����ʽ����--------" << endl << endl;
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