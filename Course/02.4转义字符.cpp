#include<iostream>
using namespace std;
//转义字符于表示一些不能显示出来的ASCII字符
int main() {	
	cout << "\\" << endl;  //代表一个反斜线字符"\"
	cout << "\tHello" << endl;  //水平制表(HT)  （跳到下一个TAB位置）
	cout << "\n" << endl; //换行(LF) 
	system("pause");
	return 0;
}