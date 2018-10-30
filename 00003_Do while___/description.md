Hasta ahora vimos dos tipos diferentes de ciclos, **for y while**, a continuación te vamos a presentar el Do while.<br>

El do while es una estructura repetitiva basada completamente en el while, pero con una pequeña diferencia:
> #####El do while ejecuta por lo menos un ciclo.

Analicemos el siguiente código:

``` c
int numero = 0;
int cont = 1;
while(cont<=5)
{
  numero = numero + cont;
  cont++;
}
```

Este código suma los números del 1 al 5, pero... ¿Qué ocurriria si la variable `cont` empezara en un número mayor a 5?

``` c
int numero = 0;
int cont = 6;
while(cont<=5)
{
  numero = numero + cont;
  cont++;
}
```

En este caso la condición del while **nunca se cumpliría**, es por ello que el contenido del mismo **nunca se va a ejecutar** y al finalizar el programa el valor de la variable `numero` va a ser igual a cero.

¿Qué pasaría si utilizamos la sentencia do while?

``` c
int numero = 0;
int cont = 6;
do
{
  numero = numero + cont;
  cont++;
}
while(cont<=5);
```

Do while nos garantiza que el contenido dentro del ciclo se ejecutará por lo menos una vez, es por ello que al finalizar el programa el valor de la variable `numero` va a ser igual a 6.

> Si no confias en los resultados que te acabamos de decir, podés hacer una **prueba de escritorio**.