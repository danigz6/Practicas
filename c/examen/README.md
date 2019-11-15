Para el ejercicio, se deberá generar un identicon de tamaño variable (n) que represente a un número entero positivo. Por ejemplo, un identicon de tamaño 5 para el número 145 sería el siguiente: 

	+ - - - +
	|= *  *	|
	| * * *	|
	| *  * .|
	+ - - - +

Como se puede observar en el ejemplo, el identicon está compuesto por un marco exterior y un "relleno" interior. Para n=5, contiene 5 filas, 5 columnas y 9 caracteres interiores. Para generar el identicon, se deben seguir las siguientes reglas:
	
	- Estará rodeado de un marco usando los caracteres '+','-' y '|'.
	- El cuerpo o relleno del identicon será todo lo que está dentro del marco, y consideraremos que la posición (0,0) es el primer carácter que aparece en el cuerpo.
	- La primera posición del cuerpo (0,0) será especial, ya que contendrá el carácter '=' si la suma de los dígitos del número es par,y '%' si es impar.
	- Para el resto de posiciones se calculará el resto de la división entera del número introducido entre la suma de la fila y la columna más 1. Dependiendo del resto, se pintará un carácter u otro :

		º 0: '.'
		º 1: '*'
		º otros: 'o'

El programa deberá contener, al menos, los siguientes módulos:
	
	-leeUsuario(): se encargará de solicitar al usuario por teclado el valor para representar y el tamaño, y devolverá a ambos números.
	-sumaDigitos(): devolverá la suma de los digitos del número introducido.
	-dibujaidenticon(): recibirá el valor para representar y el tamaño, y dibujará por pantalla el identicon.