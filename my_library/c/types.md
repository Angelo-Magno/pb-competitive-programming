### Tabela de Especificadores de Formato e Tipos de Dados

| Especificador | Tipo de Dados          | Descrição e Formato                                   | Limites para Tipos de Dados (C99)          |
|---------------|------------------------|------------------------------------------------------|--------------------------------------------|
| `%d`          | `int`                  | Representa um número inteiro com sinal.              | -2.147.483.648 a 2.147.483.647 (32 bits)   |
| `%i`          | `int`                  | Similar ao `%d`, mas pode ser usado para prefixos octais e hexadecimais. | -2.147.483.648 a 2.147.483.647 (32 bits)   |
| `%u`          | `unsigned int`         | Representa um número inteiro sem sinal.              | 0 a 4.294.967.295 (32 bits)                |
| `%o`          | `unsigned int`         | Representa um número em formato octal (base 8).      | 0 a 4.294.967.295 (32 bits)                |
| `%x`          | `unsigned int`         | Representa um número em formato hexadecimal com letras minúsculas. | 0 a 4.294.967.295 (32 bits)                |
| `%X`          | `unsigned int`         | Representa um número em formato hexadecimal com letras maiúsculas. | 0 a 4.294.967.295 (32 bits)                |
| `%f`          | `float`                | Representa um número de ponto flutuante (precisão simples). | ±1.175494e-38 a ±3.402823e+38 (6–7 dígitos de precisão) |
| `%lf`         | `double`               | Representa um número de ponto flutuante (precisão dupla). | ±2.2250738585072014e-308 a ±1.7976931348623157e+308 (15–16 dígitos de precisão) |
| `%Lf`         | `long double`          | Representa um número de ponto flutuante (precisão estendida). | Depende da implementação, mas geralmente maior que o `double`. |
| `%c`          | `char`                 | Representa um único caractere.                       | -128 a 127 (8 bits) ou 0 a 255 (se unsigned)|
| `%s`          | `char*`                | Representa uma string (sequência de caracteres).     | Varia conforme a implementação do sistema e a alocação de memória. |
| `%p`          | `void*`                | Representa um ponteiro, exibindo seu endereço de memória. | Depende da arquitetura (geralmente 8 ou 16 bytes). |
| `%ld`         | `long int`             | Representa um número inteiro de tipo `long`.         | -2.147.483.648 a 2.147.483.647 (32 bits) em sistemas de 32 bits ou -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 em sistemas de 64 bits. |
| `%ld`         | `long int`             | Representa um número inteiro longo (32 ou 64 bits).  | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 (64 bits em sistemas de 64 bits) |
| `%lu`         | `unsigned long int`    | Representa um número inteiro sem sinal do tipo `long`. | 0 a 18.446.744.073.709.551.615 (64 bits)    |
| `%lld`        | `long long int`        | Representa um número inteiro longo longo (64 bits).  | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 |
| `%llu`        | `unsigned long long int` | Representa um número inteiro sem sinal longo longo. | 0 a 18.446.744.073.709.551.615             |
| `%hd`         | `short int`            | Representa um número inteiro curto (16 bits).        | -32.768 a 32.767                           |
| `%hu`         | `unsigned short int`   | Representa um número inteiro curto sem sinal.        | 0 a 65.535                                 |
| `%e`          | `float` ou `double`    | Representa um número de ponto flutuante no formato científico. | ±1.175494e-38 a ±3.402823e+38 (para `float`) ou ±2.2250738585072014e-308 a ±1.7976931348623157e+308 (para `double`). |
| `%g`          | `float` ou `double`    | Representa um número de ponto flutuante, usando notação científica ou fixa, dependendo da precisão. | Depende da implementação e precisão do número. |
| `%a`          | `float` ou `double`    | Representa um número de ponto flutuante em notação hexadecimal. | Depende da implementação. |
| `%n`          | `int*`                 | Armazena o número de caracteres impressos até o momento na variável apontada. | N/A                                        |
| `%%`          | `literal`              | Exibe o caractere `%` literal.                       | N/A                                        |


### Exemplo de Código para Testar Especificadores

```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int i = 42;
    unsigned int ui = 42;
    float f = 3.14;
    double d = 3.14159;
    char c = 'A';
    char* str = "Exemplo de string";
    
    printf("Inteiro (d): %d\n", i);
    printf("Inteiro sem sinal (u): %u\n", ui);
    printf("Float (f): %f\n", f);
    printf("Double (lf): %lf\n", d);
    printf("Caractere (c): %c\n", c);
    printf("String (s): %s\n", str);
    printf("Hexadecimal (X): %X\n", i);
    printf("Octal (o): %o\n", ui);
    printf("Endereço (p): %p\n", (void*)&i);
    printf("Limite INT_MAX: %d\n", INT_MAX);
    printf("Limite FLT_MAX: %e\n", FLT_MAX);
    
    return 0;
}
```

