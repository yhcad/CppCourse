#include<iostream>
using namespace std;
//�߼���������ܽ᣺ &&��ͬ��Ϊ�棬����Ϊ�١�
//�߼������  --- ��
int main() {

	int a = 10;
	int b = 10;
	cout << (a && b) << endl;// 1

	a = 10;
	b = 0;
	cout << (a && b) << endl;// 0 

	a = 0;
	b = 0;

	cout << (a && b) << endl;// 0
	system("pause");
	return 0;
}