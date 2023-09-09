#include<bits/stdc++.h>
using namespace std  ; 
void nhap( float &x ){
	
	cin >> x ; 
}
void nhap(int &n ){
	
	cin >> n ; 
}
int tang( int &n ){
	n++ ; 
	return n ;  	
}
int giam( int &n){
	n--; 
	return n ; 
}
double  tinh(float x , int n){
	int i ; 
	double  p =  1.0 * 2018 * pow(x,n); 
	for( i = 2 ; i <= n ; i++){
		p = p + 1.0 * pow(x,i) / pow(3, i-1) ;  
	}
	return p; 
}
int tong(int n) {
    int sum = 0;
    for (int i = 6; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}
void  sumSCLH5 (int n,int  m  ){
	int sum1 , sum2 , sum ; 
	if(n< m ){
	
		sum1 = tong(n-1 ) ; 
		sum2 = tong(m) ; 
		sum = sum2 -sum1 ;
		cout << "\n  tong so chan lon hon 5 trong doan  "<< n << " den  " << m  << " la : \t "  << sum<<endl ;
	}
	else if( n ==  m ){
		cout << "\n day khong phai la mot doan !  " ; 
	}
	else {
		sum1 = tong(n) ;
		sum2 = tong(m-1) ;
		sum = sum1 -sum2 ; 
		cout << "\n  tong so chan lon hon 5 trong doan  "<< n << " den  " << m  << " la : \t "  << sum<<endl ;
	}
}
main(){
	float x ; 
	int m ,i,  n  ; 
	
	cout << "  nhap so thuc x = " ; 
	nhap(x) ;
	cout << " nhap so nguyen n = " ; s
	nhap(n) ;
	cout << "  nhap so nguyen m = " ;	
	nhap(m);
	tang(n) ; 
	tang(m);
	cout << "\n  gia tri cua n sau khi tang len 1 don vi la : " << n ; 
	cout << "\n  gia tri cua m sau khi tang len 1 don vi la : " << m ;
	cout << "\n  gia tri cua  bieu thuc sau khi n tang len 1 don vi : \t   " <<tinh(x,n) ;   
	sumSCLH5(n,m) ; 
}