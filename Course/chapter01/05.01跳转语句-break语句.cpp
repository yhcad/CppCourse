#include<iostream>
using namespace std;

//����:��������==ѡ��ṹ����ѭ���ṹ
//breakʹ�õ�ʱ����
//* ������switch��������У���������ֹcase������switch
//* ������ѭ������У�������������ǰ��ѭ�����
//* ������Ƕ��ѭ���У�����������ڲ�ѭ�����

int main() 
{
	//1����switch �����ʹ��break
	cout << "��ѡ������ս�������Ѷȣ�" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	}

	system("pause");
	return 0;
}