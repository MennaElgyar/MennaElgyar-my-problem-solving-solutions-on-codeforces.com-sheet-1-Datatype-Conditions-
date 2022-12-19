#include <iostream>
#include<iomanip>
#include<math.h>
#include<cmath>
#include<Algorithm>
using namespace std;
 
int main()
{    
            int X =0, y=0, m=0, d=0;
            cin >> X ;
 
            y = X / 365;
            X = X - (365 * y);
            m = X / 30;
            d = X - (m * 30);
 
            cout << y << " years" << endl << m << " months" << endl << d << " days" << endl;
     
}
