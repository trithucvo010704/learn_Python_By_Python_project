#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// sinh xau nhi phan
int n ,a[100], ok,k,cnt;
void ktao(){
	for( int i =1; i<= n ;i++){
		a[i] = 0 ;// khoi tao bit dau tien 
	}
}
void sinh(){
	int  i = n ;
	while( i>= 1 && a[i]==1){
		a[i] = 0 ; 
		--i ;
	}
	if( i == 0 ){
		ok = 1 ; // bit cuoi 
	}
	else {
		a[i] =1 ; 
	}
}
// sinh con 
void ktao(){
	for( int  i = 1; i <= k ; i++){
		a[i] = i ;
	}
}
void sinh(){
	int i = k ;
	while( i>= 1 && a[i] = n-k+ i ){
		--i ;
	}
	if( i == 0){
		ok =1 ; /// dung cau hinh cau cung 
	}
	else {
		a[i]++; 
		for( int  j = i+1 ; j <=k ; j++){
			a[j] = a[j-1] +1; 
		}
	}
}
// sinh hoan vi 
void ktao(){
	for( int i =1 ; i<=n ; i++ ){
		a[i] = i ; 
	}
}
void sinh(){
	int i = n-1; 
	while( i >= 1 && a[i] > a[i+1]){
		--i ; 
	}
	if( i == 0 ) ok = 1; 
	else {
		int j = n ; 
		while( a[j] < a[i]) -- j ; // xong vong lap tim dc vi tri thang dau tien lon hon ai nn
		swap(a[i],a[j]);
		// lat nguoc thang sau i 
		int l = i+1, r= n ;
		while( l<r){
			swap(a[l],a[r]);
			++l ;--r ;
		}

	}
}
// sinh tong tich
void ktao(){
	cnt =1; 
	a[1] = n ; 

}
void sinh(){
	int i = cnt; 
	while( i >= 1 && a[i] == 1){
		--i ; 
	}
	if( i == 0 ){
		ok = 1 ; 
	}
	else{
		a[i]-- ; 
		int d = cnt- i+1 ;
		cnt = i ; 
		int t = d / a[i] ;
		int l = d % a[i] ;
		if( t){
			for( int i =1 ;i <= t ;i++ ){
				++cnt; 
				a[cnt] = t;
			}
		}
		if( l != 0 ){
			++cnt;
			a[cnt] = l ;
		}
	}
}