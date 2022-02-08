#include<iostream>
using namespace std;
//递增
//总结：前置递增先对变量进行++，再计算表达式，后置递增相反
int main() {

	//后置递增
	int a = 10;
	a++; //等价于a = a + 1
	cout<< "a++=" << a << endl; // 11

	//前置递增
	int b = 10;
	++b;
	cout<<"++b=" << b << endl; // 11

	//区别
	//前置递增先对变量进行++，再计算表达式
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout<<"a2=" << a2 << endl;
	cout<<"a2+b2=" << b2 << endl;

	//后置递增先计算表达式，后对变量进行++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout<<"a3="  << a3 << endl;
	cout<<"a3+b3="  << b3 << endl;

	system("pause");

	return 0;
}
