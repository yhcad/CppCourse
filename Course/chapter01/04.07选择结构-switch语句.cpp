#include<iostream>
using namespace std;
//switch���
/*
switch(���ʽ)
{	
    case ���1��ִ�����;break;
	case ���2��ִ�����;break;
	...
	default:ִ�����;break;
}
*/
int main() 
{

	//�����Ӱ���� 
	//10 ~ 9   ����   
	// 8 ~ 7   �ǳ���
	// 6 ~ 5   һ��
	// 5������ ��Ƭ

	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}

system("pause");
return 0;

//ע��1��switch����б��ʽ����ֻ�������ͻ����ַ���
//ע��2��case�����û��break����ô�����һֱ����ִ��
//�ܽ᣺��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����
}
