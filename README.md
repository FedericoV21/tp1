# tp1
 Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo?
 Es conveniente incluirlo por tres razones principales eficiencia, limpieza y seguridad.
  Eficiencia ya que evitamos subir archivos no necesarios en el repositorio github como archivos temporales, etc.
  Limpieza ya que mantenemos el repositorio limpio y ordenado.
  Seguridad ya que evitamos subir archivos sensibles como contraseñas, etc.
¿Cuándo se debe hacer?
    Cuando creamos un proyecto nuevo o cuando nos encontramos con archivos que no queremos subir al repositorio.
¿Cómo configuraría el archivo .gitignore?
    Lo configuraría agregando una línea por cada archivo o carpeta que no quiero subir al repositorio.

# Punto 2: Código misterioso

a) Explicación del código misterioso:

El código realiza una transformaciones sobre un número entero:

1. Invierte los dígitos del número (por ejemplo, 452 → 254).
2. Divide el número invertido por 2 (254 → 127).
3. Suma los dígitos del resultado anterior al propio número (127 + 1 + 2 + 7 = 137).

Por lo tanto, el código toma un número, lo invierte, lo divide por dos y luego le suma la suma de sus propios dígitos.

Justificación de los nuevos nombres descriptivos:

- invertirDigitos: Invierte los dígitos del número.
- dividirPorDos: La función divide el número por dos.
- sumarDigitos: La función suma los dígitos del número al propio número.
- procesarNumero: Aplica las tres transformaciones anteriores.
- numero: Variable que almacena el valor a procesar, antes llamada dato_secreto.

# Punto 2: Código sin funcionar

b) Errores encontrados y soluciones:

1. Error en scanf:
    - Error típico: Olvidar el operador & al leer variables (scanf("%d", valor1);).
    - Solución: Usar scanf("%d", &valor1); para pasar la dirección de memoria.

2. Error de punteros:
    - Error típico: Pasar la variable en vez de su dirección a la función (duplicar_numero(valor1);).
    - Solución: Llamar con la dirección (duplicar_numero(&valor1);).

3. Error de sintaxis:
    - Error típico: Falta de punto y coma, llaves incorrectas, o errores en declaraciones.
    - Solución: Corregir la sintaxis según el estándar del lenguaje C.

4. Variables no inicializadas:
    - Error típico: Usar variables sin asignarles un valor.
    - Solución: Inicializar todas las variables antes de usarlas.

# Punto 4: 
Revise los archivos subidos en su repositorio de github. ¿Qué archivos 
vé?
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   tp1_1.c
        new file:   tp1_1.exe

¿Cuál cree que no hace falta que esté? 
 .exe