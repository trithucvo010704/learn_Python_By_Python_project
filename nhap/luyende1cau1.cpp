#include<bits/stdc++.h>
using namespace std; 
void nhap ( float &a ,float &b ){
    cout <<"\n Nhap x : " ; 
    cin >> a ; 
    cout <<"\n nhap y : " ; 
    cin  >> b ; 
}
float tinh(float x1, float x2, float y1, float y2){
    return sqrt(pow(x1-x2,2) + pow(y1-y2,2) );       
}
float chuvi(float x1,float x2,float x3,float y1,float y2,float y3){
    float ab = tinh(x1,x2,y1,y2) ; 
    float ac = tinh(x1,x3,y1,y3) ;
    float bc = tinh(x2,x3,y2,y3) ; 
    return ab+ac+bc ; 
}
int main(){
    float x1,x2,y1,y2,x3,y3 ; 
    cout << "\n nhap toa do dinh  A : " ; 
    nhap(x1,y1) ; 
    cout << "\n nhap toa do dinh B : " ; 
    nhap(x2,y2) ; 
    cout <<"\n nhap toa do dinh C : " ; 
    nhap(x3,y3) ; 
    cout <<"\n Chu vi tam giac ABC : "<<chuvi(x1,x2,x3,y1,y2,y3) ; 
}