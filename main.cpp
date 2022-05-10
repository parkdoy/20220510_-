/* 
1-10회 횟수를 입력받고 그 획수만큼 정수를 입력 받아서 저장
그 후 숫자의 합을 구하는 함수를 만들어서 합을 출력

========
-----
숫자의 합을 구하는 함수선언
-----

횟수 입력받음
입력>>3회
배열의 사이즈가 [입력]인 배열 생성

for 배열의 사이즈만큼([입력]) 반복
	입력>>정수
	배열_2에 정수 저장
	입력>>정수
	배열_2에 정수 저장
	입력>>정수
	배열_2에 정수 저장

출력 << 숫자의 합을 구하는 함수
========

*/

#include <iostream>

using namespace std;

int Sum(int* Array, int Count) //Array 포인터로 배열의 첫번째 주소를 가져옴 Count는 값을 복사해서 가져옴 //매개변수를 받을 때는 int* Array = Array[]로 받을 수 있다. 
{
	//Array에 요소를 Sum에 저장
	int result = 0;

	for (int i = 0; i < Count; ++i)
	{
		result += Array[i];
	}
	return result;
}


int main()
{
	int Count = 0;
	cin >> Count;

	//배열의 사이즈가 Count인 배열 생성
	int* Array = new int[Count];

	//배열에 Count만큼 정수 입력
	for (int i = 0; i < Count; ++i)
	{
		cin >> *(Array + i); // Array[i]
	}
	
	cout<<Sum(Array,Count);

	delete[] Array;
	Array = nullptr;

	return 0;
}