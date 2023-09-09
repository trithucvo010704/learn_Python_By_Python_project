#include<bits/stdc++.h>
using namespace std ; 
void nhap( int &n){
	do{
		cin >> n ; 
	}
	while( n<= 0 ) ; 
}
void nhapmang( int *a , int n){
	for( int i = 0 ; i< n; i++){
		cout <<"a["<<i<<"] =" ; 
		cin >>a[i] ; 
	}
}
void xuatmang( int  *a , int n){
	for( int i = 0 ; i< n ; i++){
		cout <<a[i]<<" " ; 
	}
	
}
void chenchanvaocuoi( int *a , int &n){
	int m = n ;
	for( int i = 0 ; i< m ; i++){
		if( a[i] %2 == 0 ){
			a[n] = a[i] ; 
			n++; 
		}
	}
}
int main(){
	int n ; 
//	float a[100] ; 
	cout <<"\n nhap so luong ptu cua mang : " ; 
	nhap(n ) ; 
	int  *a = new int [n] ; // decapphatchonochen  
	nhapmang(a,n) ; 
	chenchanvaocuoi(a,n) ; 
	cout <<"\n mang sau khi chen: " ; 
	xuatmang(a,n ); 
	
}