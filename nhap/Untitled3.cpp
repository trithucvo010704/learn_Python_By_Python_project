#include<iostream>
#include<bits/stdc++.h>
using namespace std  ; 
// kĩ thuật đệ quy 
//  LIFO  : last in frist out :  vao sau nhung ra dau tien 
// muốn dùng truy hồi ta phải tìm ra phải tìm ra hai thứ 
// thứ nhất :  điều kiện dừng 
// thứ hai : công thức truy hồi 
// ví dụ muốn tính giai thừa của n : 
long gt(int n ){
	if (n ==  1) {
		return 1  ; 
	}
	else {
		return n * gt(n-1); 
	}
}
long luythua(int x , int n){
	if(n==1) return x ;
	else return x* luythua(x,n-1) ; 
		
}
void xinchao(){
	xinchao() ;
}
int main(){
	cout << gt(5) <<endl ; 
	cout << " \t 2 mu 3 =   " << luythua(2,3) ; 
}
