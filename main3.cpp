#include <iostream>
#include <string>

using namespace std;

bool funcion(string c1){
     for(int i = 0; i<c1.length(); i++)
     {
         if(c1[i]!=c1[(c1.length()-1)-i])return false;
     }
    
     return true;
}


int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  
  int n;
  int num;
  string c = "";

  cin>>n;

  
  while(n--)
  {
      cin>>num;
      c += num;
  }
  
  if(funcion( c))cout<<"SI";
  else cout<<"NO";


  return 0;
}
