#include<bits/stdc++.h>
using namespace std ;
int main()  {
	set<int > s;
	int n , m ;
	
	int a[100] , b[100] ; 
	cin >> n ; 
	for( int i = 0 ; i<n  ; i++){
		cin >> a[i] ; 
	} 
	cin >> m ;
	for( int j = 0 ; j< m ; j++){
		cin >>b[j] ; 
	}
	for( int i = 0 ; i< n ; i++){
		for( int  j = 0 ;j< m ; j++){
			if(a[i] == b[j]){
				s.insert(a[i]) ; 
			}
		}
	}
	for( int x : s){
		cout << x<<" " ; 
	}

}