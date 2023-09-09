#include<bits/stdc++.h>
using namespace std  ; 
int tang( int &n)
{
	return n++ ;  
}
float S( float x , int n){
	if( n<= 2)
		return fabs(n*x) ; 
	else {
		float s= sqrt(2019) ; 
		for( int i = 1 ; i<= n ;i++){
			s = s+ pow(x+1 , i) ; 
		}
		return s ; 
	}
}
float P ( int n ){
	float s = 2020 * exp(fabs(n)) +1 ;
	for( int i = 2 ; i<= n ; i++){
		s= s+ 3*n; 
	}
	return s ; 
}
int main(){
	int n ; 
	float x ; 
	cout <<"\n nhap so thuc x : " ; 
	cin >> x  ; 
	cout <<"\n nhap so nguyen n :" ; 
	cin >>  n ; 
	tang(n) ;
	tang(n) ; 
	tang(n) ; 
	cout << n ; 
	cout <<"\n s(x,n ) / p(n)  = " <<S(x,n) / P(n); 
}
