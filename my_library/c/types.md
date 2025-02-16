Aqui está a tabela completa com uma coluna de descrição para cada tipo de dado:  

| Tipo de Dado               | Especificador de Formato | Descrição |
|----------------------------|-------------------------|-----------|
| `char`                     | `%c`                   | Representa um único caractere. |
| `signed char`              | `%c` / `%hhd`          | Caractere com sinal (valores de -128 a 127). |
| `unsigned char`            | `%c` / `%hhu`          | Caractere sem sinal (valores de 0 a 255). |
| `char *` (string)          | `%s`                   | Ponteiro para uma string de caracteres. |
| `short`                    | `%hd`                  | Número inteiro curto com sinal. |
| `unsigned short`           | `%hu`                  | Número inteiro curto sem sinal. |
| `int`                      | `%d`                   | Número inteiro padrão com sinal. |
| `unsigned int`             | `%u`                   | Número inteiro sem sinal. |
| `long`                     | `%ld`                  | Número inteiro longo com sinal. |
| `unsigned long`            | `%lu`                  | Número inteiro longo sem sinal. |
| `long long`                | `%lld`                 | Número inteiro muito longo com sinal. |
| `unsigned long long`       | `%llu`                 | Número inteiro muito longo sem sinal. |
| `float`                    | `%f` / `%g` / `%e`    | Número de ponto flutuante de precisão simples. |
| `double`                   | `%lf` / `%g` / `%e`   | Número de ponto flutuante de precisão dupla. |
| `long double`              | `%Lf` / `%Lg` / `%Le` | Número de ponto flutuante de precisão estendida. |
| `void *` (ponteiro)        | `%p`                   | Ponteiro genérico (endereço de memória). |

### Explicação rápida dos formatos de ponto flutuante:
- `%f` → Exibe um número decimal comum (ex: `3.14159`).
- `%g` → Usa `%f` ou `%e`, dependendo do valor, para evitar zeros desnecessários.
- `%e` → Exibe em notação científica (ex: `3.14e+02` para `314`).
- `%Lf`, `%Lg`, `%Le` → Versões para `long double`.

