#include<iostream>
using namespace std;
int main() {
	
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;

	//ch = "abcde"; //���󣬲�������˫����
	//ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�

	cout << (int)ch << endl;  //�鿴�ַ�a��Ӧ��ASCII��
	ch = 97; //����ֱ����ASCII���ַ��ͱ�����ֵ
	cout << ch << endl;

	system("pause");

	return 0;
}