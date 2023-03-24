﻿#include <iostream>
using namespace std;

int main()
{
	int H;
	int M;

	cin >> H >> M;

	//입력받은 M값이 45보다 작으면 시간H값을 -1 해준다.
	//M값이 45보다 크면 M값을 -45해준다.
	if (M < 45)
	{
		H--;
		//M값이 45보다 작으니 1시간에서, (45-M)값을 빼고 계산한다.
		//ex). H값은 5, M값은 40, 5시40분-45분 = 4시 55분이다.
		// 위의 계산법을 사용하면
		// 5시40분 - [1시간 - (45-40)]에서 
		// H는 -- 이므로  4시, M은 60-5 = 55  결국, 4시 55분 이 나옴.
		M=60-(45-M);

		// H가 음수가 되면 23으로 변경
		// 왜? why?  자정이 0:0시인데 한시간을 빼면 23시니까~
		if (H < 0)
		{
			H = 23;
		}
	}
	else
	{
		M = (M - 45);
	}
	cout << H << " " << M;
}