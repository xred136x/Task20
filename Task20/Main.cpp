// ������ ������ � ������� ������������� �������
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std;

template<typename T>
void mass_Arr(T arr[], int len, int beg, int end) {
	srand(time(NULL));
	for (int i = 0; i < len; i++)
		arr[i] = rand() % (end - beg) + beg;	
}
template<typename T>
void show_Arr(T arr[], int len) {
	for (int i = 0; i < len; i++)
		cout << arr[i] << ", ";
	cout << "\b\b";
}
int searchIndex(int arr[], int len, int begin = 0) {
	int index = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == begin)
			break;
		index++;
	}
	return index;
}

int searchLastIndex(int arr[], int len, int begin = 0) {
	int lastindex = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (arr[i] == begin)
			break;
		lastindex++;
	}
	return len - 1 - lastindex;
}
int maxElement(int arr[], int len) {
	int max = -100;// ����� ���� max = arr[0], �� ���� ��������...
	for (int i = 0; i < len; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
int minElement(int arr[], int len) {
	int min = 100;
	for (int i = 0; i < len; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

int meanValue(int arr[], int len) {
	double mean = 0;
	for (int i = 0; i < len; i++)
		mean += arr[i];
	return mean / len;
}

void range(int arr[], int len, int begin, int end) {
	for (int i = 0; i < len; i++)
	if(arr[i] > begin && arr[i] < end)
		cout << arr[i] << ", ";
	cout << "\b\b";
}
int counter(int arr[], int len, int num = 200) {
	int counter = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == num)
			counter++;
	}
	return counter;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n = -100, m = 101;
	const int size = 100;
	int arr[size];
	//int arr1[10]{ 2, 5, 8, 1, 12, 9, 31, 4, 5, 10 };
	mass_Arr(arr, size, n, m);
	cout << "����� ��������� ����� �������\n";
	show_Arr(arr, size);
	cout << "\n" << "������ ������� ��������� ��-�� � ������: " << searchIndex(arr, size, 54);
	cout << "\n" << "������ ���������� ��������� ��-�� � ������: " << searchLastIndex(arr, size, 54);
	cout << "\n" << "������������ ������� �������: " << maxElement(arr, size);
	cout << "\n" << "����������� ������� �������: " << minElement(arr, size);
	cout << "\n" << "��.����-� ���� ��������� �������: " << meanValue(arr, size) << "\n";
	cout << "�������� ������� � ���������� ���������\n";
	range(arr, size, -50, 50);
	cout << "\n���������� ��������� ����������� ��������: " << counter(arr, size, -31);
	
	return 0;
}