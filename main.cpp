#include <iostream>
using namespace std;

int main() {
   float a,b;
   float x,y;
   cin >> a>>b;
   cin >> x>> y;
   float z;
   if ( x<0 && y>0){
       z=(a*x-b*y);
      cout << (z) << endl;
   }
   else if (x>=0 && y<=0){
     z=(a*(x*x)-b*y);
      cout << (z) << endl;
   }
      else{
       z=(a*x +b*(y*y));
       cout << (z) << endl;
   }
    
   return 0;
}
