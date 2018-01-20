#include </Users/homw/stdc++.h>
using namespace std;

int main(){
	vector<int> v1, v2;
	int m,n,a,b;
	cin >> m >> n;
	for(int i=0; i<m; i++){
		cin >> a;
		v1.push_back(a);
	}
	for(int i =0; i<n; i++){
		cin >> b;
		v2.push_back(b);
	}
	auto it1 = v1.begin();
	auto it2 = v2.begin();
	vector <int> v;
	for(int i=0; i < m+n; i++){
		if(*it1 < *it2){
			v.push_back(*it1);
			it1++;
			}
		else{
			v.push_back(*it2);
			it2++;
		}	
		cout << v[i]<<endl;
	}
	return 0;
}