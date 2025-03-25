#include "logic.h"

long long get_factorial(int n) {
	if (n < 0) {
		return 0;
	}

	else if (n == 0) {
		return 1;
	}

	return get_factorial(n - 1) * n;
}

long long get_fibbonaci_by_index(int n) {
	if (n <= 0) {
		return -1;
	}

	if (n <= 2) {
		return n - 1;
	}

	return get_fibbonaci_by_index(n - 1) + get_fibbonaci_by_index(n - 2);
}

void print_all_fibo_number_before_index(int limit, int counter) {
	if (counter >= limit) {
		return;
	}

	cout << get_fibbonaci_by_index(counter) << " ";
	counter++;

	print_all_fibo_number_before_index(limit, counter);

}

void print_all_fibo_number_before_n(int n, int counter) {
	long long f = get_fibbonaci_by_index(counter++);

	if (f > n) {
		return;
	}

	cout << f << " ";

	print_all_fibo_number_before_n(n, counter);

}