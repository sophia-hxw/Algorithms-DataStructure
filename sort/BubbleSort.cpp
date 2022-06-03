#include<iostream>
#include<vector>

using namespace std;

void BubbleSort(vector<int> &a);
void swapv(int &a, int &b);

int main(){
	vector<int> array = { 13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6, 11 };
    
	BubbleSort(array);

    cout<<"The sorted array is: "<<endl;
	for (vector<int>::iterator iter = array.begin(); iter != array.end(); iter++)
		cout<< *iter <<"\t";
    cout<<endl;

	system("Pause");
    return 0;
}

/*冒泡排序*/
void BubbleSort(vector<int> &a){
    int len=a.size();
	int index = 0;

    do{
		index=0;
		for (int i = 0; i<len - 1; i++){
			if(a[i]>a[i+1]){
			swapv(a[i],a[i+1]);
			index++;
			}
		}
	} while (index != 0);
}

void swapv(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}