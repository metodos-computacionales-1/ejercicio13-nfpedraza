#include <iostream>
int a;
int b;
double a2;
double b2;

int getMax(int a, int b){
if(a > b){
std::cout<<a<<"  es mayor que  "<<b<<"\n";
}
else{
std::cout<<b<<"  es mayor que  "<<a<<"\n";
}
}
double getMax(double a2, double b2){
if(a2>b2){
std::cout<<a2<<" es mayor que "<<b2<<"\n";
}
else{
std::cout<<b2<<" es mayor que "<<a2<<"\n";
}
}

int main(){
std::cout<<"Ingrese los numeros a analizar"<<"\n";
std::cout<<"numero int 1 ";std::cin>>a;std::cout<<"numero int 2 ";std::cin>>b;std::cout<<" numero dob 1 "; std::cin>>a2;std::cout<<" numero dob 2 ";std::cin>>b2;
getMax(a,b);
getMax(a2,b2);
return 0;
}
 
