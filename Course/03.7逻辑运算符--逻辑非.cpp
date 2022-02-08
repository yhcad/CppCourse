#include<iostream>
using namespace std;
//逻辑非,!,真变假，假变真
int main() 
{
  int  a =10;
  cout << "a =10时,a的非为："<< !a << endl;  //0
  cout << "a =10时,a的非的非为："<< !!a << endl;//1
  system("pause");
  return 0;
}