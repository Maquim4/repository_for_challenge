#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	cout << " Hello, World\t\n\n\n\n\n\n";
	cout << " Would you translate it?\n 1.Yes\n 2.No\n";
	int choice12, choice;
	cin>>choice12;
	switch (choice12)
	{
	case 1: cout << " What language you need?\n 1.Russian\n 2.Kazakh\n 3.Chinese\n";
		break;
	case 2: cout << " Ok, have a nice day\n";
		break;
	}
	cin >> choice;
	if (choice12 != 2)
	{
       switch (choice)
	   {
	   case 1:cout << " Привет, Мир\n";
		   break;
	   case 2:cout << " Salem Alem\n";
		   break;
	   case 3:cout << " Ni2hao3,shi4jie4\n";
		   break;
	   }
	}
	

}