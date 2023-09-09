#include<bits/stdc++.h> 
using	 namespace std ; 
int x , y ,d ; 
using long long = ll ;
const int MOD = 1e9 + 7 ;
// ocolit mo rong 
void ocolit( ll a , ll b ){
	if( b== 0 ){
		x =1; 
		y = 0 ; 
		d=a ; 
	}
	else {
		oclit( b , a%b) ; 
		int tmp = x ; // x1 
		x = y ;
		y = tmp- (a/ b) * y ; 
	}
}
void nghich_modul(ll a ,ll m ){
	ocolit(a,m) ;
	if( d != 1 ){
		cout << "\n KHONG Phai nghich_modul" ; 
	}
	else {
		cout << (  x%m + m ) % m ; <<endl ;
	}
}
ll f[1000001] ; // luu giai thua 
ll tohop ( ll k , ll n ){
	f[0] = 1 ; 
	for( int i =1 ; i<= n ; i++){
		f[i] = i* f[i-1]; 
		f[i] %= MOD ; 
	}
	ll m = f[n] % MOD 
}