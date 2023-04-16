#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string name;
	getline(cin, name);

	count = 1;
	// 빈칸이 존재하면 하나씩 증가한다.
	for (int i = 0; i < name.length(); i++) 
	{
		if (name[i] == ' ') 
		{
			count++;
		}
	}
	// 처음 시작 
	if (name[0] == ' ')
	{
		count--;
	}
	// 마지막
	if (name[name.length() - 1] == ' ')
	{
		count--;
	}
	cout << count << '\n';
	return 0;
}