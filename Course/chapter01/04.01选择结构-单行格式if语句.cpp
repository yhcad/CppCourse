#include<iostream>
using namespace std;
// 单行格式if语句

int main() {

	//选择结构-单行if语句
	//输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印

	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << "您输入的分数为： " << score << endl;

	//if语句
	//注意事项，在if判断语句后面，不要加分号
	if (score >= 600)
	{
		cout << "我考上了一本大学！！！" << endl;
	}

	system("pause");

	return 0;
}