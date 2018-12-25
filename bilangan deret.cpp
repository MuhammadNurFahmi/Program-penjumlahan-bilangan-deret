#include <iostream>
using namespace std;

int main(){
char a=1;
int penjumlahan=0;
cout<<"****************************************************"<<endl;
cout<<"*         Penjumlahan Deret(Bilangan Ganjil)       *"<<endl;
cout<<"****************************************************"<<endl;
for(int a=1; a<=11; a=a){
penjumlahan +=a;
if (a !=0){
cout<<a<<" ";
} else {
cout<<"a"<<" = ";
}
a=a+2;
}
cout<<"\njumlah ="<<penjumlahan;
return 0;
}
