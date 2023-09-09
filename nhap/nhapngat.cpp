#include <iostream>
using namespace std ;
void nhapmang( float *a, int n ){

	for( int i = 0 ; i<n  ; i++){
		cin >> a[i] ; 
	}
}
void xuatmang( float *a , int n ){
	for( int i = 0 ; i< n ; i++){
		cout << a[i] <<" " ; 
	}
}
void chencuoimang( float *a , int &n , float  x){
	n++ ; 
	a[n-1] = x ; 
}
void chen( float *a , int &n , float x){
	for( int i = 0 ; i<n-1 ; i++){
		if( a[i] > x ){
			chencuoimang(a,n,a[i]) ; 
		
		}
		
	}
}
int main(){
	int n ; 
	cin >> n ; 
	float *a  =new float [n] ; 
	nhapmang(a,n) ; 
	cout <<endl ; 
	xuatmang(a,n) ;
	chen(a,n,3) ; 
	cout <<endl ;
	xuatmang(a,n+1) ;  
}