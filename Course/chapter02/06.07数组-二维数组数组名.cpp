#include<iostream>
using namespace std;
/*
��ά����������
  �鿴��ά������ռ�ڴ�ռ�
  ��ȡ��ά�����׵�ַ


*/

int main() {

	//��ά����������
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "��ά�����С�� " << sizeof(arr) << endl;
	cout << "��ά����һ�д�С�� " << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ�ش�С�� " << sizeof(arr[0][0]) << endl;

	cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//��ַ
	cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
	cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;
	

	system("pause");
	return 0;

//�ܽ�1����ά�������������������׵�ַ
//�ܽ�2���Զ�ά����������sizeofʱ�����Ի�ȡ������ά����ռ�õ��ڴ�ռ��С


}
