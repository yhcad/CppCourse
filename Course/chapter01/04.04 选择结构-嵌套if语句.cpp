#include<iostream>
using namespace std;
//Ƕ��if���
/*
* ��ʾ�û�����һ���߿����Է��������ݷ����������ж�
* �����������600����Ϊ����һ��������500�ֿ��϶���������400����������������Ϊδ���ϱ��ƣ�
* ��һ�������У��������700�֣����뱱�󣬴���650�֣������廪������600�����˴�
*/
int main() {

	int score = 0;

	cout << "������߿��ķ�����" << endl;

	cin >> score;

	cout << "������߿�����Ϊ��" << score << endl;

	if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "�ҿ����˱���" << endl;
		}
		else if (score > 650)
		{
			cout << "�ҿ������廪" << endl;
		}
		else
		{
			cout << "�ҿ������˴�" << endl;
		}
		
	}
	else if (score > 500)
	{
		cout << "�ҿ����˶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "�ҿ�����������ѧ" << endl;
	}
	else
	{
		cout << "��δ���ϱ���" << endl;
	}

	system("pause");

	return 0;
}