#include <iostream>
using namespace std;

//int _tmain(int argc,_TCHAR* aggv[])
int main ()
{
    setlocale(0, "");
    double num;

    cout << "Ââåäèòå ïðîèçâîëüíîå ÷èñëî: ";
    cin >> num;

    if (num < 10) { // Åñëè ââåäåííîå ÷èñëî ìåíüøå 10.
        cout << "Ýòî ÷èñëî ìåíüøå 10." << endl;
	} else { // èíà÷å
        cout << "Ýòî ÷èñëî áîëüøå ëèáî ðàâíî 10." << endl;
	}
    return 0;
}
 
