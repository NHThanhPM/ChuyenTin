#include <bits/stdc++.h>
using namespace std;

int A,B,result=0;

bool checksnt(int a){
	if(a<2)return false;
	for(int i=int(sqrt(a));i>1;i--){
		if(a%i==0)return false;
	}
	return true;
}

bool checkDoix(int a){
	string b=to_string(a);
	for(int i=0;i<b.size()/2;i++){
		if(b[i]!=b[b.size()-i-1])return false;
	}
	return true;
}

int main(){
	freopen("AUTION.INP","r",stdin);
	freopen("AUTION.OUT","w",stdout);
	cin>>A>>B;
	for(int i=A;i<=B;i++){
		if(checksnt(i) && checkDoix(i)){
			// cout<<i<<'\n';
			result++;
		}
	}
	cout<<result;
}