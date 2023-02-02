#include <iostream>
using namespace std;
int main() {

   int a, b , c ,d , res;
   cin>> a>> b >> c >>d ;
    a =a % 100;
    b =b % 100;
    c =c % 100;
    d =d %100;
    
   res = (a*b*c*d)%100;
   
   if(res<=9){
       cout<<"0" <<res<<endl;
   }else{
       cout<< res<<endl;
   }

}
