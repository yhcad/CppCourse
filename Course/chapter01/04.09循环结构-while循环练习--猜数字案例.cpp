#include<iostream>
using namespace std;
#include<ctime>
//ѭ���ṹ-whileѭ�����
//whileѭ����ϰ����--������
//ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С��
//����¶Թ�ϲ���ʤ���������˳���Ϸ��
int main() 
{
	//�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ����
	srand((unsigned int)time(NULL));
	//1��ϵͳ���������
	int num = rand() % 100 +1;//rand()%100+1����0+1~99+1�����
	//cout << num << endl;
	cout << "����������:" << endl;
	//2����ҽ��в²�
	int val =0;

	while(1)
	{
		cin >> val;
		//3���ж���ҵĲ²�
		//�´� ��ʾ�µĽ��������߹�С���·��ص�2��

		if(val > num)
		{
			cout<<"�²����"<<endl;
		}
		else if (val < num)
		{
			cout<<"�²��С"<<endl;
		 }
		else
		{
			cout<<"��ϲ�����¶��ˣ�"<<endl;
			//�¶� �˳���Ϸ
			break;
		 }
	}
	system("pause");
	return 0;
}