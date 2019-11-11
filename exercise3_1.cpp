#include <iostream>
int N;
int i;
int fib(int N);
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

int main(){
   std::cout<<"1 para recursivo o 0 para rapido  "<<"\n";
   std::cin>>x;
    
   if(x==1){
    std::cout<<"ingrese numero"<<"\n";
    std::cin>>N;
    std::cout<<"Fibonacci de "<<N<<" = "<<fib(N);
   }
	
   else if(N==0){
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
