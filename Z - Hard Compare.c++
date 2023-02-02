#include <iostream>
#include <cmath>
using namespace std;
int main() {
   double a, b , c ,d ;
   cin>> a>> b >> c >>d ;
   
   #take log for two side ==> log(a^b), log(c^d) ==> b*log(a) , d*log(c)
   if(b*log(a)>d*log(c)){
       cout<<"YES" <<endl;
   }else{
       cout<< "NO"<<endl;
   }

}
