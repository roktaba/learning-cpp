#include <iostream>
#include <string>
using namespace std;

int main () {
    string A,B,op;
    while(cin>>A>>op>>B) {
      int diff = A.size()-B.size();
      if (diff==0) {
          diff = A.compare(B);
      }
      if(op=="==") cout<<(diff == 0)<<endl;
      else if(op=="!=") cout<<(diff !=0)<<endl;
      else if(op=="<=") cout<<(diff <=0)<<endl;
      else if(op==">=") cout<<(diff >=0)<<endl;
      else if(op=="<") cout<<(diff <0)<<endl;
      else if(op==">") cout<<(diff >0)<<endl;
      else cout<<"nieznana operacja"<<endl;
     }
   return 0;
  }
