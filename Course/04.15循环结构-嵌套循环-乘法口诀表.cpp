#include<iostream>
using namespace std;
//练习案例：嵌套循环-乘法口诀表
//案例描述：利用嵌套循环，实现九九乘法表
//九九乘法表：列数*行数 =计算结果；列数 <=当前行数

int main() 
{
	for(int i=1; i<=9; i++)
	{
		for(int j= 1;j<=i; j++)
		{
			cout << j << "*" << i << "=" << j*i <<" " ;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}