#include<iostream>
using namespace std;
void bubbleSort(int* arr, int len)//ð������
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			//���j>j+1��ֵ����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	//1���ȴ���һ������
	int arr[10] = { 2,3,4,5,2,6,3,8,9,1 };
	//���鳤��
	int len = sizeof(arr) / sizeof (arr[0]);
	//2������������ʵ��ð������
	bubbleSort(arr, len);
	//3����ӡ����������
	printArray(arr, len);
	return 0;
}