#include<iostream>
using namespace std;
/*
ʵ������Ԫ������
����������
������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
(��ԭ����Ԫ��Ϊ��1,3,2,5,4;���ú�������Ϊ:4,5,2,3,1);
*/
int main() {
	//1����������
	int arr[5] = { 1,3,2,5,4 };
	cout << "����ǰ�����飺 " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2��ʵ������
	//2.1 ��¼��ʼ�±�λ��
	//2.2 ��¼�����±�λ��
	//2.3 ��ʼ�±�������±��Ԫ�ػ���
	// ��ʼλ��++   ����λ��--
	//2.5ѭ��ִ��2.1������ֱ����ʼλ�� >= ����λ��
	int start = 0; //��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1; //�����±�

	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		// �±����
		start++;
		end--;
	}


	//3����ӡ����
	cout << "���ú�����飺" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}