#include<iostream>
using namespace std;

//����:��������==ѡ��ṹ����ѭ���ṹ
//breakʹ�õ�ʱ����
//* ������switch��������У���������ֹcase������switch
//* ������ѭ������У�������������ǰ��ѭ�����
//* ������Ƕ��ѭ���У�����������ڲ�ѭ�����

int main() 
{
	//��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
