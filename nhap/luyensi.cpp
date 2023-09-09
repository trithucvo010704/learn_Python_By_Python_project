#include<bits/stdc++.h>
using namespace std ; 
void nhap( int &a , int &b){
	do{
		cin >> a ; 
		cin >> b ; 
	}
	while(a< 0 || b<0); 
}
float p(int x ){
	return 1.0 * exp(fabs(x)) + pow(x,6) + pow(pow(x,2) +1 ,1.0*1/3) ; 
}
int s(int n){
	int S = 0; 
	for( int i = 1 ; i< n ;i++){
		S+= pow(-1 ,i+1)*i ; 
	}
	return S ; 
}
float f( int a, int b , float x ){
	if( a+b != 0 ){
		return exp(x) / (a+b) ; 
	}
	else if (a == 0 && b== 0 ){
		return 0; 
	}
	else {
		return sqrt(pow(a,2) + pow( b,2)+ 100) + pow(sin(x) ,3) ; 
	}
}
int main(){
	int m,n ; 
	float x ; 
	cout <<"\n  Nhap hai so nguyen duong m va n : " ; 
	nhap(m,n) ; 
	cout << "\n gia tri  s(n) + p(n+m) : " << 1.0 * s(n) +p(n+m) ; 
	cout <<"\n nhap so thuc x :" ; 
	cin >> x ; 
	cout <<"\n gia tri f : " <<f(n+1,m,x) ; 
}