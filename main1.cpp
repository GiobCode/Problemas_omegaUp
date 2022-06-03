#include <iostream>

using namespace std;

bool func(int arr1[] ,string cad2){
     for(int i = 0; i<cad2.length(); i++)
     {
          if(arr1[cad2[i]-97]<=0){cout<<"NO es un Anagrama!";return false;}

          arr1[cad2[i]-97]--;
     }

     cout<<"SI es un ANAGRAMA!";
     return true;
}


int main() {

  //Link del pronlema resuelto : https://omegaup.com/arena/problem/un_anagrama_sencillo/#problems
  int arr1[27] = {0};

  string cad1;
  string cad2;

  cin>> cad1;
  cin>> cad2;
  

  if(cad1.length() == cad2.length())
  {


       for(int i = 0; i<cad1.length(); i++)
       {
           arr1[cad1[i]-97]++;
       }

       func(arr1,cad2);

  }else
  {
     cout<<"Las cadenas tienen longitud diferente.\n";
     cout<<"Operacion Cancelada!";
  }

  return 0;
}
