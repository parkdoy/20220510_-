/* 
1-10ȸ Ƚ���� �Է¹ް� �� ȹ����ŭ ������ �Է� �޾Ƽ� ����
�� �� ������ ���� ���ϴ� �Լ��� ���� ���� ���

========
-----
������ ���� ���ϴ� �Լ�����
-----

Ƚ�� �Է¹���
�Է�>>3ȸ
�迭�� ����� [�Է�]�� �迭 ����

for �迭�� �����ŭ([�Է�]) �ݺ�
	�Է�>>����
	�迭_2�� ���� ����
	�Է�>>����
	�迭_2�� ���� ����
	�Է�>>����
	�迭_2�� ���� ����

��� << ������ ���� ���ϴ� �Լ�
========

*/

#include <iostream>

using namespace std;

int Sum(int* Array, int Count) //Array �����ͷ� �迭�� ù��° �ּҸ� ������ Count�� ���� �����ؼ� ������ //�Ű������� ���� ���� int* Array = Array[]�� ���� �� �ִ�. 
{
	//Array�� ��Ҹ� Sum�� ����
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

	//�迭�� ����� Count�� �迭 ����
	int* Array = new int[Count];

	//�迭�� Count��ŭ ���� �Է�
	for (int i = 0; i < Count; ++i)
	{
		cin >> *(Array + i); // Array[i]
	}
	
	cout<<Sum(Array,Count);

	delete[] Array;
	Array = nullptr;

	return 0;
}