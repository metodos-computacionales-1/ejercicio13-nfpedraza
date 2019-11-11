#include <iostream>
int a;
int b;

int getMaxInt(int a, int b){
if(a > b){
std::cout<<a<<"  es mayor que  "<<b<<"\n";
}
else{
std::cout<<b<<"  es mayor que  "<<a<<"\n";
}
}
int main(){
std::cout<<"Ingrese los numeros a analizar"<<"\n";
std::cout<<"numero 1 ";std::cin>>a;std::cout<<"numero 2 ";std::cin>>b;
getMaxInt(a,b);
return 0;
}
