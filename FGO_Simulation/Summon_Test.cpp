#include "Summon.h"


int main()
{
	cout << "Which simulation do you want?" << endl;
	cout << "1. Summon until getting up servant.   2. Summon with limited summon times constraint." << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		Summon();
	}
	else
	{
		if (choice == 2)
		{
			long Max_times;
			cout << "Input your max summon times" << endl;
			cin >> Max_times;
			Summon(Max_times);
		}
		else
		{
			cout << "Input should be 1 or 2." << endl;
		}
	}
		

		system("pause");
	
	return 0;
}