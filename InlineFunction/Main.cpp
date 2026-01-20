#include <iostream>
using namespace std;
//용량/속도
//Inline함수 사용 이유 -> 속도
// __forceinlin 무조건 펼쳐라 inline 컴파일러가 판단
//매크로(Macro)
//#define Square(x) ( (x) * (x))

#define FORCEINLINE __forceinline

FORCEINLINE int Square(int x)
{
	return x * x;
}
int main()
{
	int number = Square(10);
}