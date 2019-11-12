# ejercicio13-nfpedraza

ejercicio 2--> int addition(const int &a, int b)
Al correr el codigo con este cambio ( mandar a como referencia) no compilara pues no aceptara o entedera cambios a la variable que entra por parametro   

ejercicio 4--> La diferencia principal es que al llamarlos de la misma manera la funcion sabra cuando realizar la operacion debida depndiendo del valor que le entre como parametro. En este caso al realizar dos funciones diferente en el caso deonde los valores sean entreos o "double" si por entrada tiene enteros el codigo ya sabe que operaciones hacer, paralelamente si le entra "double" el codigo sabre que otra operacion realizar sin la necesidad que nombrar funciones distintas, a esto se le conoce como overloaded.

ejercicio 5--> La unica diferencia que su pudo notar e inferir es que al mandarlo con ese numero de decimales, fuerza al codigo a imprimir el numero con 16 decimales. Esto significa que si hubieramos mandado otro numero con menos decimales la bandera no hubiera dejado imprimir porque esta revisa que la condiion se de.

ejercicio 6 --> al codigo usado, en la parte del recorrido ->  for(int i =0;i<=N;i++), se le tenia que quitar el "=" del <=N ya que esto significaba que correria hasta un N+1. Cuando corremos con un numero muy grande eg. 10.000.000, el terminal generara un "fatal error" con el nombre de stackoverflow, el cual significa que se esta recargando el programa con muchas variables locales, "inunda" la memoria causando un crashing normalmento debido a una recurision infinita, un reocrrido/loop infinito. Por ultimo, la bandera --fsanitizer dectecta ugs y para la compilacion apenas encuentra el primer error:

https://clang.llvm.org/docs/AddressSanitizer.html
    This approach allows AddressSanitizer to produce faster and smaller generated code (both by ~5%).
    Fixing bugs becomes unavoidable. AddressSanitizer does not produce false alarms. Once a memory corruption occurs, the program is in an inconsistent state, which could lead to confusing results and potentially misleading subsequent reports.

Haciendo el ultimo cambio en al definicion de arreglo,de alguna manera se libera la memoria permtiendo compilar funciones mas robusta sin la necesidad de iinundar la memoria.

