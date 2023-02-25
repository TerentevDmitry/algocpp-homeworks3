#include "countSort.h"

void countSort(int* arr, const size_t arrSize)
{
	//int arrBeginOfValue = LONG_MAX;
	////������� ����������� ������� 10
	//for (size_t i = 0; i < arrSize; i++)
	//{
	//	if (arr[i] < arrBeginOfValue)
	//	{
	//		arrBeginOfValue = arr[i];
	//	}
	//};
	//std::cout << "arrBeginOfValue: " << arrBeginOfValue << std::endl;
	
	int arrMaxOfValue = LONG_MIN;
	//������� ������������ �������
	for (size_t i = 0; i < arrSize; i++)
	{
		if (arr[i] > arrMaxOfValue)
		{
			arrMaxOfValue = arr[i];
		}
	};
	std::cout << "arrMaxOfValue: " << arrMaxOfValue << std::endl;

	//������� ����� ������ �������� ���� �������� arrMaxOfValue
	int* arrForCount = new int[arrMaxOfValue + 1] {0};

	// ������� �������� � arr[] � ������ ���-�� �������� � arr[] � arrForCount[]
	// ��������� � arrForCount[] ��������� �������� �� arr[]
	// �������� �������� arr[i]==9, �� � arrForCount[9] ������� 1 � �.�.
	for (size_t i = 0; i < arrSize; i++)
	{
		arrForCount[arr[i]]++;
	};

	// ������ � arr[] �������� ������� ��� ������� ��� ��� �������� � arrForCount[]
	// �������� �������� arrForCount[9]==3, �� � arr[i] ������� ��� ���� ������ � �.�.
	int arrIndex = 0;
	for (size_t i = 0; i < arrMaxOfValue; i++)
	{
		for (size_t j = 0; j < arrForCount[i]; j++)
		arr[arrIndex++] = i;
	};

	delete[] arrForCount;
	arrForCount = nullptr;
};