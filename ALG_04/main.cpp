#include <iostream>

using namespace std;

//int find ()

bool find(int* arr, int N, int value) {
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (arr[i] == value) {
			return true;
		}
	}
	return false;
}

class Matrix {
public:
	int rows;
	int cols;

	int** data;

	Matrix(int rows, int cols) {
		this->rows = rows;
		this->cols = cols;
		this->data = new int* [rows];

		for (int i = 0; i < rows; i++)
		{
			this->data[i] = new int[cols];

			for (int j = 0; j < cols; j++)
			{
				this->data[i][j] = 0;
			}
		}



	}

	~Matrix() {
		for (int i = 0; i < rows; i++)
		{
			delete[] data[i];
		}
		delete[] data;
		data = nullptr;
	}

	void init() {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				data[i][j] = i + j;
			}
		}
	}

	void print() {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << data[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}

};

void MatMatMulti(Matrix A, Matrix B, Matrix C) {
	//for (int i = 0; i < ; i++)
	//{

	//}
}


int main(){
	/*int a[] = { 1,2,3,4,5,6,7,8,9 };*/

	//for (int i = 0; i < sizeof(a); i++)
	//{
	//	if (a[i] == 5) {
	//		cout << a[i];
	//	}
	//}

	const int N = 10;
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = i;
	}



	//cout << "Element found: " << (find(arr, N, 5) ? "yup" : "nope") << endl;


	Matrix A(2, 3);
	Matrix B(3, 2);
	Matrix C(2, 2);

	A.init();
	A.print();

	B.init();
	B.print();


	return 0;
}