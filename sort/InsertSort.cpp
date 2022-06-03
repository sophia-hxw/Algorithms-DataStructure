#include<iostream>
#include<vector>
#include<list>

using namespace std;

void InsertSort(vector<int >& src, list<int>& dst);
void Insert(list<int>& dst,int val);
void output(list<int> &src);

int main(){
	vector<int > array = { 13, 19, 9, 5, 12, 8, 7, 4, 21, 2, 6, 11 };
	//size_t len = array.size();
	list<int > OutArray;

	InsertSort(array, OutArray);
	output(OutArray);

	system("Pause");
	return 0;
}

/*插入排序*/
void InsertSort(vector<int >& src, list<int>& dst){
	size_t len=src.size();
	
	dst.push_back(src[0]);

	for(int i=1;i<len;i++){
		int val=src[i];
		Insert(dst,val);
		//output(dst);
	}
}

void Insert(list<int>& dst, int val){
	list<int>::iterator iter ;
	//output(dst);
	//cout << "size of dst: " << dst.size() << endl;
	//cout << "The corrent number is: " << val << endl;
	//system("Pause");
	int numindex =1;
	for (iter = dst.begin(); iter != dst.end(); iter++, numindex++){
		//cout << "numindex: " << numindex << endl;
		if (dst.size() == 1){
			if (val < *iter){
				//dst.resize(dst.size() + 1);
				//cout << "type  1" << endl;
				dst.insert(iter, val);
			}
			else{
				//cout << "type  2" << endl;
				dst.resize(dst.size() + 1);
				*(++iter) = val;
			}
		}
		else{
			if (val < *iter){
				//cout << "type  3" << endl;
				//dst.resize(dst.size() + 1);
				dst.insert(iter, val);
				break;
			}
			else if (numindex==dst.size()){
				//cout << "type  4" << endl;
				dst.resize(dst.size() + 1);
				*(++iter) = val;
			}
			else
				continue;
		}
	}
}

void output(list<int> &src){
	cout<<"The array after handling is: "<<endl;
	for(list<int>::iterator iter=src.begin();iter!=src.end();iter++)
		cout<<*iter<<"\t";
		
	cout<<endl;
}