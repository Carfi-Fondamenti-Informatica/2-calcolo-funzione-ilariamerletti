#include <iostream>
using namespace std;

int main() {
   float a,b;
   float x,y;
   cin >> a>>b;
   cin >> x>> y;
   if( ( x<0, y>0){
       cout << (a*x-b*y)<< endl;
   }
   else if (x>=0, y<=0){
       cout << (a*x*x-b*y)<< endl;
   }
   else{
       cout << (a*x +b*y*y)<< endl;
   }
   return 0;
}
