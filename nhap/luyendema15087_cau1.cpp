#include<bits/stdc++.h>
using namespace std  ; 
float p ( float x){
	return exp(fabs(x)) + pow(x,5) + sqrt(pow(x,2)+1) ; 
}
void doicho( int &n , int &m ){
	int tg  = n ; 
	n = m ; 
	m = tg ; 
}
float s( float x , int n ){
	if( x<0 ) return 1 ; 
	else {
		float s = 100 ; 
		for( int i = 1 ; i<= n ; i++){
			s+= 1.0 (pow(x,i) / (1.0 *n+i)) ;  
		}
		return s ; 
	}
}
int main(){
	float a ; 
	int b,c ; 
	cout <<"\n nhap so thuc a : "; cin >> a ;
	cout <<"\n nhap so nguyen b : " ; cin >> b; 
	cout <<"\n nhap so nguyen b : " ; cin >> c; 
	if( c<b ){
		doicho(b,c) ; 
	}
	cout <<"\n gia tri bieu thuc =  "<<s(a,c) - s(a,b) ; 
}