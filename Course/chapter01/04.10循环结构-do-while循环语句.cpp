#include<iostream>
using namespace std;
//循环结构-do-while循环语句
//与while的区别在于:do...while会先执行一次循环语句，再判断循环条件
int main() 
{
	//在屏幕上输出0-9这10个数字。
	//do ... while
	int num =0;
	do
	{
		cout << num << endl;

		num++;

	}while(num < 10);

	system("pause");

	return 0;
}