#include<iostream>
using namespace std;
//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�
//���ж�A��B˭��
/*
  A��    ��A��C�Ƚ�
	     A��    �����A����
         C��    �����C����

  B��    ��B��C�Ƚ�
         B��    �����B����
         C��    �����C����
*/
int main() 
{
	//1��������ֻС������ر���
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  //2�����û�����3ֻС�������
  cout << "������С��A�����أ�"<<endl;
  cin >> num1;
 
  cout << "������С��B�����أ�"<<endl;
  cin >> num2;
  
  cout << "������С��C�����أ�"<<endl;
  cin >> num3;

  cout << "С��A������Ϊ��"<<num1<< endl;
  cout << "С��B������Ϊ��"<<num2<< endl;
  cout << "С��C������Ϊ��"<<num3<< endl;
  
  //3���ж���ֻС������
  // ���ж�A��B����
  if(num1>num2) //A��B��
  {
	  if(num1>num3) //A��C��
	  {
	  cout << "С��A����"<<num1<< endl;
	  }
	  else{ //C��A��
	  cout << "С��C����"<<num3<< endl;
	  }
  }
  else{ //B��A��
     if(num2>num3){ //B��C��
	  cout << "С��B����"<<num2<< endl;
	  }
	  else{ //C��B��
	  cout << "С��C����"<<num3<< endl;
	  }
  
  }

	system("pause");
	return 0;
}