#include<iostream>
using namespace std;
//��������if���

int main() {

	int score = 0;

	cout << "�����뿼�Է�����" << endl;

	cin >> score;

	if (score > 600)
	{
		cout << "�ҿ�����һ����ѧ" << endl;
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