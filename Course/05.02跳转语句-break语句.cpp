#include<iostream>
using namespace std;

//����:��������==ѡ��ṹ����ѭ���ṹ
//breakʹ�õ�ʱ����
//* ������switch��������У���������ֹcase������switch
//* ������ѭ������У�������������ǰ��ѭ�����
//* ������Ƕ��ѭ���У�����������ڲ�ѭ�����

int main() 
{
	//2����ѭ���������break
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break; //����ѭ�����
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}
