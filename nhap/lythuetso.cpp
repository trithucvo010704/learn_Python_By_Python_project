#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 
int nto(int n ){
	for(int i = 2 ; i<=  sqrt(n); i++){
		if(n%i == 0 ){
			return 0 ; 
		}
	}
	return n>1 ; 
}
int  mang[1000001]; 
// ham số nguyên tố tối ưu 
// ham sàng số nguyên tố băngthuật toán
void sang(){
	// tạo mang chứa n +1  ptu ; 
	
	for(int  i = 0 ; i< 1000000 ; i++ ){
		mang[i] = 0 ; 
	}
	mang[0]=mang[1] = 0 ; 
	for( int  i = 0 ; i< 1000 ; i++ ){
		if(nto(mang[i] )  ){
			mang[i] = 1; 
		}
		for( int j = i*i ; j < 1000000 ; j+= i ){
			mang[j] = 0;  
		}
	}
}
// hàm sàng trên đoạn a  ,b  
void sang(int l , int r ){
	int mang[l-r +1 ];
	for( int i = 0 ; i< r-l+1 ; i++ ){
		if(nto(mang[i]) == true ){
			mang[i] = 1  ; 
		}
		for( int  j = max(i*i , (l+ i-1 ) / i * i ); j <=  r ; j+= i ){
			mang[j-l] = 0 ; 
		}
	}
}
 
int main(){
//	int t ; cin >> t  ; 
//	while(t--){
	int n ; 
	cin >> n ; 		
	
	if(n<= 1 ){
		cout << " khong phai la so nguyen to !"; 
	}
	else {
		for(int  i = 2 ;  i<=  n ; i++ ){
			if( nto(i) ){
				cout << " " <<i ; 
			}
		}
	}
	
}