#include<iostream>
using namespace std;
//练习案例：敲桌子
//案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，
//我们打印敲桌子，其余数字直接打印输出。
int main() 
{
	/*
	案例分析：
	1、先输出1到100这些数字
	2、从这100个数字中找到特殊数字，改为“敲桌子”
	特殊数字
	7的倍数     (7 14 21 28...)%7=0 
	个位有7     (7,17,27,37...)%10=7 
	十位有7     (70,71,72,73...)/10=7
	*/

	//1、先输出1到100这些数字
	for(int i =1; i<100;i++)
	{
		//2、从100个数字中找到，特殊数字，打印“敲桌子”
		// 如果是7的倍数、个位有7、十位有7 ，打印“敲桌子”
		if(i%7 ==0 ||i%10 == 7|| i/10 ==7 )//如果是特殊数字，打印“敲桌子”
		{
			cout << "敲桌子"<< endl;

		}
		else // 如果不是特殊数字，才打印数字。
		{
			cout << i << endl;

		}

	}

	system("pause");
	return 0;
}