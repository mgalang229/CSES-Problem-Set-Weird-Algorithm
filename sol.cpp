#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ll n;
	cin >> n;
	cout << n << " ";
	while(n!=1) {
		if(n%2==1) {
			n*=3;
			n++;
		} else
			n/=2;
		cout << n << " ";
	}
	cout << "\n";
}
