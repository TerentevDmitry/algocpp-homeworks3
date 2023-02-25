#include "countSort.h"

void countSort(int* arr, const int arrSize)
{
	int arrMaxOfValue = -1;
	//������� ������������ �������
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] > arrMaxOfValue)
		{
			arrMaxOfValue = arr[i];
		}
	};
	std::cout << "arrMaxOfValue: " << arrMaxOfValue << std::endl;

	int arrForCountSize = arrMaxOfValue + 1;

	//������� ����� ������ �������� ���� �������� arrMaxOfValue
	int* arrForCount = new int[arrForCountSize] {};

	// ������� �������� � arr[] � ������ ���-�� �������� � arr[] � arrForCount[]
	// ��������� � arrForCount[] ��������� �������� �� arr[]
	// �������� �������� arr[i]==9, �� � arrForCount[9] ������� 1 � �.�.
	for (int i = 0; i < arrSize; i++)
	{
		arrForCount[arr[i]]++;
	};

	// ������ � arr[] �������� ������� ��� ������� ��� ��� �������� � arrForCount[]
	// �������� �������� arrForCount[9]==3, �� � arr[i] ������� ��� ���� ������ � �.�.
	int arrIndex = 0;
	for (int i = 0; i < arrForCountSize; ++i)
	{
		for (int j = 0; j < arrForCount[i]; ++j)
		arr[arrIndex++] = i;
	};

	delete[] arrForCount;
	arrForCount = nullptr;
};