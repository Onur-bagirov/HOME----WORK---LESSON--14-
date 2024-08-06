#include <iostream>

using namespace std;

int main()
{

	cout << "==================================";
	srand(time(NULL));
	cout << "==================================";
	cout << "\n\n";
	cout << "Tap - 1";
	cout << "\n\n\n\n";

	int min_number_1 = -20;
	int max_number_1 = 20;
	const int num_1 = 10;
	int number_1[num_1] = {};

	for (int f = 0; f < num_1; f++)
	{
		number_1[f] = rand() % (max_number_1 - min_number_1 + 1) + min_number_1;
	}
	cout << "Number : ";
	for (int f = 0; f < num_1; f++)
	{
		cout << number_1[f] << ",";
	}
	for (int f = 0; f < num_1; ++f) {
		if (number_1[f] < 0) {
			number_1[f] = -number_1[f];
		}
	}
	cout << "\n";
	cout << "Answer : ";
	for (int f = 0; f < num_1; ++f) {
		cout << number_1[f] << ",";
	}
	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "==================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";

	char min_char_2 = 'a';
	char max_cahr_2 = 'z';
	const int num_2 = 10;
	char num_char[num_2] = {};

	for (int x = 0; x < num_2; ++x)
	{
		num_char[x] = min_char_2 + rand() % (max_cahr_2 - min_char_2 + 1);
	}
	cout << "Character : ";
	for (int x = 0; x < num_2; ++x)
	{
		cout << num_char[x] << ",";
	}
	cout << "\n";
	cout << "Answer : ";
	for (int x = 0; x < num_2; ++x) {
		if (num_char[x] >= 'a' && num_char[x] <= 'z') 
		{
			num_char[x] = num_char[x] - 32;
		}
		cout << num_char[x] << ",";
	}   
	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "==================================";
	cout << "\n\n";
	cout << "Tap - 3";
	cout << "\n\n\n\n";
	
	int min_number_3 = 0;
	int max_number_3 = 100;
	const int num_3 = 10;
	int number_3[num_3] = {};

	for (int d = 0; d < num_3; d++)
	{
		number_3[d] = rand() % (max_number_3 - min_number_3 + 1) + min_number_3;
	}
	cout << "Number : ";
	for (int d = 0; d < num_3; d++)
	{
		cout << number_3[d] << ",";
	}
	int sum = 0;
	for (int d = 0; d < num_3; d++) {
		sum += number_3[d];
	}
	int mean = sum / num_3;
	int closestElement = number_3[0];
	int minDifference = (number_3[0] >= mean) ? (number_3[0] - mean) : (mean - number_3[0]);
	for (int d = 1; d < num_3; d++) {
		int difference = (number_3[d] >= mean) ? (number_3[d] - mean) : (mean - number_3[d]);
		if (difference < minDifference) {
			minDifference = difference;
			closestElement = number_3[d];
		}
	}
	cout << "\n";
	cout << "Numerical average: " << mean << "\n";
	cout << "Anawer : " << closestElement;
	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "==================================";
	cout << "\n\n";
	cout << "Tap - 4";
	cout << "\n\n\n\n";

	int min_number_4 = 1;
	int max_number_4 = 100;
	const int num_4 = 10;
	int number_4[num_4] = {};

	for (int y = 0; y < num_4; y++)
	{
		number_4[y] = rand() % (max_number_4 - min_number_4 + 1) + min_number_4;
	}
	cout << "Number : ";
	for (int y = 0; y < num_4; y++)
	{
		cout << number_4[y] << ",";
	}
	cout << "\n";
	int _number_4;
	cout << "\nEnter number : ";
	cin >>  _number_4;
	int _n_u_m[num_4];
	for (int i = 0; i < num_4; i++)
	{
		_n_u_m[(i + _number_4) % num_4] = number_4[i];
	}
	for (int i = 0; i < num_4; i++) {
		number_4[i] = _n_u_m[i];
	}
	cout << "\n";
	cout << "Answer : ";
	for (int y = 0; y < num_4; y++) {
		cout << number_4[y] << ",";
	}
	cout << "\n\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "==================================";
}

