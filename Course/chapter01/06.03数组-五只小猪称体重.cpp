#include<iostream>
using namespace std;
/*
练习案例1：五只小猪称体重
案例描述：
在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
找出并打印最重的小猪体重。
*/
int main() {
	//1、创建5保小猪体重的数组
	int arr[5] = { 300,350,200,400,650 };
	//2、从数组中找到最大值
	int max = 0; //先认定一个最大值为0
	for (int i = 0; i < 5; i++)
	{
		//cout << arr[i] << endl;
        //如果访问的数组中的元素比我认定的最大值还要大时，更新最大值。
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	//3、打印最大值
	cout << "最重的小猪体重为： " << max << endl;
	system("pause");
	return 0;
}