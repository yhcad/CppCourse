#include<iostream>
using namespace std;
//���ã� ������������ת���
//*�﷨�� goto ���;
//���ͣ� �����ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��

int main() 
{
   cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

	FLAG:

	cout << "5" << endl;
	system("pause");
	return 0;
}
