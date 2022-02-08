#include<iostream>
using namespace std;
//循环结构-while循环语句
//语法： while(循环条件){ 循环语句 }
//只要循环条件的结果为真，就执行循环语句
int main() 
{
	//显示0-9的数字。
	int num = 0;
	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}
	system("pause");
	return 0;
	//注意：在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环
}