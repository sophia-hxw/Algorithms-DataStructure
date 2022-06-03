#include<iostream>
#include<vector>

using namespace std;

void SelectSort(vector<int> &A);
void Select(vector<int> &A, int start, int stop);
void swapv(int &a, int &b);
void output(vector<int> &array, int a);

int main(){
	vector<int> array = { 13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6, 11 };

	output(array,0);

    SelectSort(array);

	output(array,1);

	system("Pause");
    return 0;
}

/*选择排序*/
void SelectSort(vector<int> &A){
    int len=A.size();

	for (int i = 0; i < len; i++){
		//output(A,0);
		Select(A,i,len-1);
		//output(A,1);
	}

}

void Select(vector<int> &A, int start, int stop){
    int val=A[start];
    int len=A.size();
    int pos=0;

	for (int i = start; i < stop + 1; i++){
		if(A[i]<val){
			pos=i;
			val=A[i];
		}
	}
    
	//cout << "pos: "<<pos << endl;

    if(pos!=0)
		swapv(A[start],A[pos]);
}

void swapv(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void output(vector<int> &array,int index){
	if (index==0)
		cout << "Before sorted: " << endl;
	else
		cout << "After sorted: " << endl;

	for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++)
		cout << *iter << "\t";
	cout << "\n" << endl;
}