#include<iostream>
#include<vector>

using namespace std;

void QuickSort(vector<int > &A, int p, int q);
int Partition(vector<int> &a, int p, int q);
void swapv(int &a, int &b);

int main(){
	vector<int> seti = { 13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6, 11 };
	int len = seti.size();
	QuickSort(seti,0,len-1);

	cout << "The sorted array is: \n";
	for (vector<int>::iterator iter = seti.begin(); iter != seti.end(); iter++)
		cout << *iter << "\t";
	cout << endl;

	system("Pause");
	return 0;
}

/*快排*/
void QuickSort(vector<int > &A,int p,int q){
	if (p < q){
		int pos = Partition(A, p, q);		
		QuickSort(A, p, pos - 1);		
		QuickSort(A, pos + 1, q);
	}
}

int Partition(vector<int> &a,int p, int q){
	int val = a[p];
	int j = q + 1;
	for (int i = q; i > p-1; i--){
		if (a[i]>val){
			j = j - 1;
			if (i != j)
				swapv(a[j],a[i]);
		}
	}

	if (p != j - 1)
		swapv(a[p],a[j-1]);

	return j - 1;
}

void swapv(int &a,int &b){
	a = a + b;
	b = a - b;
	a = a - b;
}