#include <iostream>
int N;
int i;
int x;

int fib(int N){
if(N==0){
return 0;
}
else if(N==1){
return 1;
}
else{
return fib(N-1) + fib(N-2);
}
}

int fib2(int N, bool print = true){
int ret=0;
if (N>0){
if(N<2){
ret=1;
}
else{
ret= fib2(N-1,false) + fib2(N-2,false);
}
if(print){
fib2(N-1);
std::cout<<ret<<" ";
}
}
return ret;
}

int main(){
   std::cout<<"1 para recursivo o 0 para rapido  "<<"\n";
   std::cin>>x;
    
   if(x==1){
    std::cout<<"ingrese numero"<<"\n";
    std::cin>>N;
    std::cout<<"Fibonacci de "<<N<<" = "<<fib2(N);
    std::cout<<" ";
   }
	
   else if(x==0){
       std::cout<<"Ingrese numero"<<"\n";
       std::cin>>N;
       std::cout<<"Fast Fibo de"<<" "<<N<<"\n ";
       for(i=1;i<=N;i++){
       std::cout<<fib(i)<<" ";
 }
}     
    else{
	std::cout<<"mal"<<"\n";
   }
return 0;
}
