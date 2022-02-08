#include<iostream>
using namespace std;
//三目运算符
/*
作用：*通过三目运算符实现简单的判断
语法：表达式1 ? 表达式2 ：表达式3
解释：
    如果表达式1的值为真，执行表达式2，并返回表达式2的结果；
    如果表达式1的值为假，执行表达式3，并返回表达式3的结果。
*/
int main() 
{
    //创建三个变量abc
	//将a和b做比较，将变量大的值赋值给变量c
	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b;
	cout << "c = " << c << endl;

	//C++中三目运算符返回的是变量,可以继续赋值

	(a > b ? a : b) = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

 system("pause");
 return 0;
}