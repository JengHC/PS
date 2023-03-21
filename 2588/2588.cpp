#include <iostream> //입출력 헤더파일
using namespace std;

int main()
{
    int A, B; // 472 , 385 

    //cin >> (입력) cout << (출력)
    cin >> A >> B;

    cout << A * (B % 10) << endl; // 385에서 일의 자리(5) 반환
    cout << A * ((B % 100) / 10) << endl;// 385에서 십의 자리(8) 반환
    cout << A * (B / 100) << endl; // // 385에서 백의 자리(3) 반환
    cout << A * B << endl;

    return 0;
}