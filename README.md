# Librería Libft

## ft_substr

### Prototipo
```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

### Descripción
Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.

## ft_strjoin

### Prototipo
```c
char *ft_strjoin(char const *s1, char const *s2);
```

### Descripción
Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’.

## ft_strtrim

### Prototipo
```c
char *ft_strtrim(char const *s1, char const *set);
```

### Descripción
Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3).

## ft_split

### Prototipo
```c
char **ft_split(char const *s, char c);
```

### Descripción
Reserva (utilizando malloc(3)) un array de strings resultante de separar la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. El array debe terminar con un puntero NULL.

## ft_itoa

### Prototipo
```c
char *ft_itoa(int n);
```

### Descripción
Utilizando malloc(3), genera una string que represente el valor entero recibido como argumento. Los números negativos tienen que gestionarse.

## ft_strmapi

### Prototipo
```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

### Descripción
A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de ’f’.

## ft_striteri

### Prototipo
```c
void ft_striteri(char *s, void (*f)(unsigned int, char*));
```

### Descripción
A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que podrá modificarse si es necesario.

## ft_putchar_fd

### Prototipo
```c
void ft_putchar_fd(char c, int fd);
```

### Descripción
Envía el carácter ’c’ al file descriptor especificado.

## ft_putstr_fd

### Prototipo
```c
void ft_putstr_fd(char *s, int fd);
```

### Descripción
Envía la string ’s’ al file descriptor especificado.

## ft_putendl_fd

### Prototipo
```c
void ft_putendl_fd(char *s, int fd);
```

### Descripción
Envía la string ’s’ al file descriptor dado, seguido de un salto de línea.

## ft_putnbr_fd

### Prototipo
```c
void ft_putnbr_fd(int n, int fd);
```

### Descripción
Envía el número ’n’ al file descriptor dado.