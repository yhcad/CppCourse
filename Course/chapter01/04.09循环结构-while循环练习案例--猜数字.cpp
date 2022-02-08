#include<iostream>
using namespace std;
#include<ctime>
//循环结构-while循环语句
//while循环练习案例--猜数字
//系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，
//如果猜对恭喜玩家胜利，并且退出游戏。
int main() 
{
	//添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样。
	srand((unsigned int)time(NULL));
	//1、系统生成随机数
	int num = rand() % 100 +1;//rand()%100+1生成0+1~99+1随机数
	//cout << num << endl;
	cout << "请您猜数字:" << endl;
	//2、玩家进行猜测
	int val =0;

	while(1)
	{
		cin >> val;
		//3、判断玩家的猜测
		//猜错 提示猜的结果过大或者过小重新返回第2步

		if(val > num)
		{
			cout<<"猜测过大"<<endl;
		}
		else if (val < num)
		{
			cout<<"猜测过小"<<endl;
		 }
		else
		{
			cout<<"恭喜您，猜对了！"<<endl;
			//猜对 退出游戏
			break;
		 }
	}
	system("pause");
	return 0;
}