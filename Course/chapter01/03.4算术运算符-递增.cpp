#include<iostream>
using namespace std;
//����
//�ܽ᣺ǰ�õ����ȶԱ�������++���ټ�����ʽ�����õ����෴
int main() {

	//���õ���
	int a = 10;
	a++; //�ȼ���a = a + 1
	cout<< "a++=" << a << endl; // 11

	//ǰ�õ���
	int b = 10;
	++b;
	cout<<"++b=" << b << endl; // 11

	//����
	//ǰ�õ����ȶԱ�������++���ټ�����ʽ
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout<<"a2=" << a2 << endl;
	cout<<"a2+b2=" << b2 << endl;

	//���õ����ȼ�����ʽ����Ա�������++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout<<"a3="  << a3 << endl;
	cout<<"a3+b3="  << b3 << endl;

	system("pause");

	return 0;
}
