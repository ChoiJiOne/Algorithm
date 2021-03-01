#include <iostream>
#include <string>
using namespace std;

string Reverse(const string& number)
{
	string output;
	output.resize(number.size());

	for (size_t i = 0; i < output.size(); ++i)
		output[i] = number[number.size() - 1 - i];

	return output;
}

bool Compare(const string& num1, const string& num2)
{
	for (size_t i = 0; i < num1.size(); ++i)
	{
		if (num1[i] < num2[i])
			return true;
		else if(num1[i] == num2[i])
			continue;
		else
			return false;
	}

	return false;
}

int main(void)
{
	ios_base::sync_with_stdio(false);

	string num1, num2;

	cin >> num1 >> num2;
	num1 = Reverse(num1);
	num2 = Reverse(num2);

	bool flag = Compare(num1, num2);

	if (flag) cout << num2;
	else cout << num1;

	return 0;
}