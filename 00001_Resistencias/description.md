Hasta ahora vimos dos de los tres tipos básicos de estructuras. Las primeras fueron las **secuenciales**, que no son ni más ni menos que aquellas que se ejecutan una después de la otra.<br>Luego comenzamos con las estructuras de **decisión** donde vimos dos tipos de sentencias distintas, **IF** y **SWITCH**.<br> Ahora aparece una pregunta...<br>¿Qué pasa cuando los ingresos son muchos?<br>Para darnos una mano con esto aparecen las estructuras repetitivas.
La primera sentencia que vamos a ver se denomina **FOR** y la utilizaremos siempre que sepamos la cantidad de veces que se va a repetir un bloque de instrucciones.<br>
La sintaxis en C es la siguiente:<br>

``` C
for (I=0;I<10;I++)
{
  printf("%d\t", I);
}
```
En el ejemplo anterior tenemos una variable **I** que tiene 3 valores. El primero es el valor inicial del ciclo, el segundo nos indica hasta que donde se va a repetir. En cuanto a la tercera aparición de la variable, se trata del incremento que va a sufrir por cada una de las veces que se repita.
>**La sentencia for tampoco finaliza con punto y coma.**




