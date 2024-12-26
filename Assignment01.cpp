#include <iostream>

using namespace std;

int sum(int arr[], int size)
{
	int x = 0;
	for (int i = 0; i < size; i++)
	{
		x += arr[i];
	}
	return x;
}

int average(int arr[], int size)
{
	int x = sum(arr, size);
	x /= size;

	return x;
}

void Ascending(int arr[], int size)
{
	int i, j, temp = 0;
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "오름차순 정렬 : ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void Descending(int arr[], int size)
{
	int i, j, temp = 0;
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "내림차순 정렬 : ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main()
{
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 입력할 수 : ";
		cin >> arr[i];
	}

	cout << "수의 합은 : " << sum(arr, 5) << endl;
	cout << "수의 평균값은 : " << average(arr, 5) << endl;

	cout << "오름차순 정렬은 1번, 내림차순 정렬은 2번 : ";
	int num;
	cin >> num;

	while (num != 0)
	{
		if (num == 1)
		{
			Ascending(arr, 5);
			cout << "다시 수를 입력 : ";
			cin >> num;
		}
		else if (num == 2)
		{
			Descending(arr, 5);
			cout << "다시 수를 입력 : ";
			cin >> num;
		}
		else
		{
			cout << "프로그램 종료 : ";
			break;
		}
	}
}
