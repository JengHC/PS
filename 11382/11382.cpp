//꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다.이제 A + B + C를 계산할 차례이다!
//첫 번째 줄에 A, B, C(1 ≤ A, B, C ≤ 10^12)이 공백을 사이에 두고 주어진다.
#include <iostream>
using namespace std;
int main()
{
	// int 보다 범위가 크기때문에 long long 으로 변수 지정
	// long으로 변수 지정해도 가능함.
	long long a, b, c;

	cin >> a >> b >> c;

	cout << a + b + c << endl;

	return 0;
}