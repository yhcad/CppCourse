#include<iostream>
using namespace std;

//���ã� ��==ѭ�����==�У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��

int main() 
{
	for (int i = 0; i < 100; i++)
	{
		//��������������ż���������
		if (i % 2 == 0) //0 2 4 6 8 10
		{
			continue; //����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ����
			// break���˳�ѭ������continue���ᡣ
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}
//continue��û��ʹ����ѭ����ֹ����break������ѭ��