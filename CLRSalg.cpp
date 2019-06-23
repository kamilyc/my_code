#include<iostream>
#include<vector>
using namespace std;

void INSERTION_SORT(vector<int> &A)
{
	for (int j = 1, key, i; j < A.size(); j++){
		key = A[j];
		i = j - 1;
		while (i>0 & A[i] > key){
			A[i + 1] = A[i];
			i -= 1;
		}
		A[i + 1] = key;
	}
}


void insertion_sort_test(){
	vector<int> A{ 1, 2, 5, 3, 2, 6, 8, 5, 3, 2, 7 };
	for (auto i : A){
		cout << i << ' ';
	}
	cout << endl;
	INSERTION_SORT(A);
	for (auto i : A){
		cout << i << ' ';
	}
	cout << endl;

	getchar();
}

void swap(int *p1, int *p2)
{
	auto temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	//cppPrimerTest()
	//insertion_sort_test();
	int  i1 = 23, i2 = 45;
	cout << i1 << ends << i2 << endl;
	swap(&i1, &i2);
	cout << i1 << ends << i2 << endl;
	getchar();
}