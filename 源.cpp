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
	cout << "1������ѧ��������";
	cin >> this->SName;
	cout << "2ѧ�ţ�";
	cin >> this->SNumber;
	cout << "3�Ա�(����Ϊ0��Ů��Ϊ1)��";
	cin >> this->SSex;
	cout << "4�������ڣ������գ�:";
	cin >> this->SDate;
	cout << "5���:";
	cin >> this->SHigh;
	cout << "6����:";
	cin >> this->SHight;
	cout << "7�߿��ɼ�:";
	cin >> this->SScoregaokao;
	cout << "8��ͥסַ:";
	cin >> this->SAddress;
	cout << "\t";
}
void Student::print()
{
	cout << "��ȷ���������Ϣ:" << endl;
	cout << "1ѧ����Ϣ��������" << SName << endl;
	cout << "2ѧ�ţ�" << SNumber << endl;
	cout<<"3�Ա�(����Ϊ0��Ů��Ϊ1)��" << SSex << endl;
	cout << "4�������ڣ������գ�:" << SDate << endl;
	cout << "5���:" << SHigh << endl;
	cout <<"6����:" << SHight << endl;
	cout << "7�߿��ɼ�:" << SScoregaokao << endl;
	cout<<"8��ͥסַ:" << SAddress << endl;
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
	cout << "�����Ϣ����Ļ���ѡ����Ӧ�Ĵ�����,(�������޸ģ��Ұ첻��������)" << endl;
	cout << "\t";
	s.init();
	s.print();
	//s.change();
	s.print();
	system("pause");
	return 0;
}