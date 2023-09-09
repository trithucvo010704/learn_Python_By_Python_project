#include<bits/stdc++.h>
using namespace std; 
int x ,y,d ; // d ucln 
typedef long long ll ;
const int MOD = (int ) 1e9 + 7 ; 
void extened ( ll a , ll b ){
	if( b== 0 ){
		x = 1;
		y = 0 ;
		d =a ; 
	}
	else {
		extened( b,a%b); 
		int tmp = x ;// luu gia tri x1 
		x = y ; 
		y = tmp- (a/b) * y ; // y sau la y1
	}
}
ll modular_inverse( ll a , ll m  ){
	extened(a,m) ; 
	if( d!= 1 ){
		return 0 ; 
		 
		
	}
	else {
		x = (x % m +m ) % m ;  
		return x ; 
	}
}
// way 2 : m la so nguyen to  
ll powmodul( ll a , ll b , ll m){
	ll res  = 1 ; 
	res%= m ; 
	while( b!= 0 ){
		if( b%2 ==1 ){
			res *= a; 
			res %= m ; 
		}
		a *= a; 
		 a%= m ; 
		b /= 2 ; 
		
	}
}
ll modular_inverse2( ll a, ll m ){
	return powmodul(a,m-2,m) ; 
}
// to hop chap k cua n 
// way 1 
int a[1000][1000]; 
void  intn( ){
	for( int i = 0 ; i<=  1000 ; i++){
		for( int j = 0 ; j<= i ; j++){
			if( j == 0 || j == i ){
				a[i][j] = 1; 
			}
			else {
				a[i][j] = a[i-1][j-1] + a[i-1][j] ; 
			}
		}
	}
}
// way 2 
ll gt[1000001] ; 

int main(){
    ll n , k ;cin >> n>> k ; 
   
    gt[0] = 1; 
	for( int i = 1;i <= n ; i++){
		gt[i] = i* gt[i-1] ; 
		gt[i] %=  MOD ;// k bi tran so
	}
	ll kq = gt[n] %MOD * modular_inverse2(gt[n-k] * gt[k] %MOD , MOD ) %MOD ; // chia du cho mau xong nghih modul xong chia tat ca cho mdul 
	cout << kq <<endl ;
}
