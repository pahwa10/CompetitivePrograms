/ /* https://www.geeksforgeeks.org/majority-element */ 
#include </Users/homw/stdc++.h>
using namespace std;

int moore(vector<int> vec, int size){
	int majindex =0, count =1;
	for(int i=1; i < size; i++){
		if(vec[majindex]==vec[i]) count++;
		else count--;
		if(count==0){
			majindex = i;
			count=1;
		}
	}
	return majindex;
}

void ismajelement(int majindex, vector <int> vec, int size){
	int count = 0;
	for(int i=0; i < size; i++)ƒ{
		if(vec[majindex] == vec[i]) count++;
	}
	if(count > size/2) cout << vec[majindex];
	else cout << "None" << endl; 
return;
}

int main(){
	vector<int> v;
	int n,a;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
		v.push_back(a);
	} 
	int size = sizeof(v)/sizeof(int);
	int majindex; 
	majindex = moore(v,size);
	ismajelement(majindex,v,size);
	return 0;
}
