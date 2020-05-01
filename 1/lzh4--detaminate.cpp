#include "hit.h"
#include <stdio.h>  
double det(int n, double *aa)
{
	if (n == 1)
		return aa[0];
	double *bb = new double[(n - 1)*(n - 1)];//创建n-1阶的代数余子式阵bb    
	int mov = 0;//判断行是否移动   
	double sum = 0.0;//sum为行列式的值  
	for (int arow = 0; arow < n; arow++) // a的行数把矩阵a(nn)赋值到b(n-1)  
	{
		for (int brow = 0; brow < n - 1; brow++)//把aa阵第一列各元素的代数余子式存到bb  
		{
			mov = arow > brow ? 0 : 1; //bb中小于arow的行，同行赋值，等于的错过，大于的加一  
			for (int j = 0; j < n - 1; j++)  //从aa的第二列赋值到第n列  
			{
				bb[brow*(n - 1) + j] = aa[(brow + mov)*n + j + 1];
			}
		}
		int flag = (arow % 2 == 0 ? 1 : -1);//因为列数为0，所以行数是偶数时候，代数余子式为1.  
		sum += flag * aa[arow*n] * det(n - 1, bb);//aa第一列各元素与其代数余子式积的和即为行列式
	}
	delete[]bb;
	return sum;
}