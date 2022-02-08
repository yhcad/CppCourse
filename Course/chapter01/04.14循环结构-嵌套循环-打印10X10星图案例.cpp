#include<iostream>
using namespace std;
//嵌套循环--打印10X10星图案例
//作用：利用嵌套循环，即在循环体中再嵌套一层循环，打印10X10星图
int main() 
{
	// 打印一行星图
	for(int i =0; i <10;i++)
	{
		for(int j = 0; j < 10;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}
