#include<bits/stdc++.h> 
using namespace std ; 
void nhap( int &a , int &b , float &x ){
	cout <<"\n nhap so nguyen thu nhat : " ;
	cin >>a  ; 
	cout <<"\n nhap so nguyen thu hai : " ;
	cin >>b  ; 
	cout <<"\n nhap so thuc : " ;
	cin >>x  ; 
}
float tinh( int n , int m){
	if( n==0 ||m+(1.0*1/n) < 0 )
		return 0 ; 
	else {
		return sqrt(m+(1.0*1/n) ) ; 
	}
}
float tinht( float x , int n){
	float s = 10*exp(fabs(n-5)) ;
	for( int i =1 ; i<= n ;i++){
		s += pow(x,i) / (2*i-1) ;
	}
	return s ; 
}
int main(){
	int n , m ;
	float x ; 
	nhap(n,m,x) ;
	cout <<"\n H = " <<tinh(n,m);
	cout <<"\n T = "<<tinh(x,n+m) ; 
}