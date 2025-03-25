#include "logic.h"
/*		v.1.0
		Azarenok Rodion Maximovich, P13024, 25.03.2025	*/

int main() {
	int n;

	cout << "Get factorial of: ";
	cin >> n;

	long long factorial = get_factorial(n);

	cout << (factorial == 0 ? "Error!" : to_string(n) + "! = " + to_string(factorial)) << endl;


	cout << "--------------------------------------------------------------------\n\n";

	int choice;
	long long fibbonaci = -2;

	while (true) {
		cout << "\n1 - get Fibo number by index; "
			"\n2 - print all elements of Fibo row that aren't grater than Number; "
			"\n3 - print all Fibo numbers before your index.\n Choice:";

		cin >> choice;

		if (choice >= 1 && choice <= 3) {
			break;
		}
	}


	int number;
	cout << "Your number: ";
	cin >> number;

	switch (choice)
	{
	case 1: fibbonaci = get_fibbonaci_by_index(number); break;
	case 2: print_all_fibo_number_before_n(number, 1); break;
	case 3: print_all_fibo_number_before_index(number, 1); break;
	}

	if (fibbonaci == -1) {
		cout << "Error! ";
	}

	if (fibbonaci != -2) {
		cout << fibbonaci;
	}

	return 0;
}