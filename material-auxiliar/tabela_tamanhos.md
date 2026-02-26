# Tamanhos (em bytes) dos principais tipos em C


| Tipo em C                 | Tamanho típico (bytes) | Observações |
|--------------------------|------------------------|------------|
| `char`                   | 1                      | Sempre 1 byte (por definição do padrão C) |
| `signed char`            | 1                      | Faixa depende de implementação |
| `unsigned char`          | 1                      | 0 a 255 (típico) |
| `short` / `short int`    | 2                      | “pelo menos 2” |
| `unsigned short`         | 2                      | idem |
| `int`                    | 4                      | comum em 32/64 bits |
| `unsigned int`           | 4                      | idem |
| `long` / `long int`      | 4 (Windows 64) ou 8 (Linux/macOS 64) | varia bastante |
| `unsigned long`          | 4 ou 8                 | acompanha `long` |
| `long long`              | 8                      | muito comum |
| `unsigned long long`     | 8                      | idem |
| `float`                  | 4                      | IEEE 754 (típico) |
| `double`                 | 8                      | IEEE 754 (típico) |
| `long double`            | 8, 12 ou 16            | varia por compilador/ABI |
| `bool` (`_Bool`)         | 1                      | comum após `#include <stdbool.h>` |
| `void*` (ponteiro)       | 4 (32 bits) ou 8 (64 bits) | depende da arquitetura |
| `size_t`                 | 4 (32 bits) ou 8 (64 bits) | tipo usado por `sizeof` |