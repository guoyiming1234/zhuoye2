#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

class Student
{
private:
	string SName;
	int SNumber;
	bool SSex;
	string SDate;
	string SHigh;
	string SHight;
	string SScoregaokao;
	string SAddress;

public:
	void init();
	void print();
	//void change();
	string GetSName;
	int GetSNumber;
	bool GetSSex;
	string GetSDate;
	string GetSHigh;
	string GetSHight;
	string GetSScoregaokao;
	string GetSAddress;
};

void Student::init()
{
	cout << "1请输入学生姓名：";
	cin >> this->SName;
	cout << "2学号：";
	cin >> this->SNumber;
	cout << "3性别(男性为0，女性为1)：";
	cin >> this->SSex;
	cout << "4出生日期（年月日）:";
	cin >> this->SDate;
	cout << "5身高:";
	cin >> this->SHigh;
	cout << "6体重:";
	cin >> this->SHight;
	cout << "7高考成绩:";
	cin >> this->SScoregaokao;
	cout << "8家庭住址:";
	cin >> this->SAddress;
	cout << "\t";
}
void Student::print()
{
	cout << "请确认输入的信息:" << endl;
	cout << "1学生信息：姓名：" << SName << endl;
	cout << "2学号：" << SNumber << endl;
	cout<<"3性别(男性为0，女性为1)：" << SSex << endl;
	cout << "4出生日期（年月日）:" << SDate << endl;
	cout << "5身高:" << SHigh << endl;
	cout <<"6体重:" << SHight << endl;
	cout << "7高考成绩:" << SScoregaokao << endl;
	cout<<"8家庭住址:" << SAddress << endl;
	cout << "\t";
}
/*void Student::change()
{   
	int c;
	cin >> c;
	switch (c)
	{
	case '0':
		break;
	case '1':
		cin >> SName;
		break;
	case '2':
		cin >> this->SNumber;
		break;
			/*case '1':

			case '1':

			case '1':

			case '1':

			case '1':*/
	
int main()
{
	Student s;
	s.init();
	s.print();
	cout << "如果信息有误的话请选择相应的错误编号,(请自行修改，我办不到啦……)" << endl;
	cout << "\t";
	s.init();
	s.print();
	//s.change();
	s.print();
	system("pause");
	return 0;
}