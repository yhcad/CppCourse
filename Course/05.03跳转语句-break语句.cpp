#include<iostream>
using namespace std;

//作用:用于跳出==选择结构或者循环结构
//break使用的时机：
//* 出现在switch条件语句中，作用是终止case并跳出switch
//* 出现在循环语句中，作用是跳出当前的循环语句
//* 出现在嵌套循环中，跳出最近的内层循环语句

int main() 
{
	//在嵌套循环语句中使用break，退出内层循环
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
