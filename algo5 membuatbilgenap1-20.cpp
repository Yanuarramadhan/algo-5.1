#include <iostream>

using namespace std;

int main(){
       cout << "===============================================================" << endl;
       cout << "== Program menampilkan bilangan Genap dari 1 - 20==" << endl;
       cout << "===============================================================" << endl << endl;

       int i;

       cout << endl << endl << "Bilangan genap : " << endl;
       for(i=1;i<=20;i++){
              if(i%2==0)cout << i << ", ";
       }
       cout << endl << endl<<endl;

       return 0;
}
