#include <iostream>
using namespace std;

//int _tmain(int argc,_TCHAR* aggv[])
int main ()
{
    setlocale(0, "");
    double num;

    cout << "������� ������������ �����: ";
    cin >> num;

    if (num < 10) { // ���� ��������� ����� ������ 10.
        cout << "��� ����� ������ 10." << endl;
	} else { // �����
        cout << "��� ����� ������ ���� ����� 10." << endl;
	}
    return 0;
}
