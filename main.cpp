#include<iostream>


using namespace std;

int main()
{

	printf("int형, 사칙연산");
	int A = 0;
	int B = 3;
	A = A + B;
	cout << A << endl;
	A = A % B;

	cout << A << endl;
	printf("float형, 사칙연산");
	float C = 1.2f;
	float D = 2.3f;
	C = C + D;
	cout << C << endl;
	C = C - D;
	cout << C << endl;
	C = C * D;
	cout << C << endl;
	C = C / D;
	cout << C << endl;
	

	return 0;
}