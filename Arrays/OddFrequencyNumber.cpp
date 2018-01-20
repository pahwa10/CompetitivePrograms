#include </Users/homw/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int n,a;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
		v.push_back(a);
	}
	int ans = v[0]^v[1];
	for(int i=2; i< n; i++){
		ans= ans^v[i];
	}
	cout << ans << endl;
	return 0;
}
