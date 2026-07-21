*This project has been created as part of the 42 curriculum by <login1>.*

# 🖨️ ft_printf

## Description

The **ft_printf** project consists of recreating the standard C `printf()` function.

Its objective is to understand how formatted output works internally while learning to use variadic functions and implement different conversion specifiers.

The implementation supports the mandatory conversions required by the 42 subject while reproducing the behavior of the original function as closely as possible.

Supported conversions include:

- `%c`
- `%s`
- `%p`
- `%d`
- `%i`
- `%u`
- `%x`
- `%X`
- `%%`

The function prototype is:

```c
int ft_printf(const char *format, ...);
```

The function returns the total number of printed characters.

Through this project, the following concepts are explored:

- Variadic functions
- Format string parsing
- Integer conversion
- Hexadecimal conversion
- Pointer formatting
- Recursive printing
- Low-level output using `write()`

---

## Instructions

### Compilation

Compile using:

```bash
gcc -Wall -Wextra -Werror *.c
```

### Example

```c
ft_printf("Name: %s\n", "Alice");
ft_printf("Age: %d\n", 24);
ft_printf("Hex: %x\n", 255);
```

Output:

```
Name: Alice
Age: 24
Hex: ff
```

### Supported Specifiers

| Specifier | Description |
|-----------|-------------|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer |
| `%d` | Signed decimal integer |
| `%i` | Signed integer |
| `%u` | Unsigned integer |
| `%x` | Lowercase hexadecimal |
| `%X` | Uppercase hexadecimal |
| `%%` | Percent sign |

---

## Resources

### Documentation

- Linux Manual Pages
  - `man 3 printf`
  - `man 2 write`
  - `man stdarg`

- GNU C Library Documentation
  - https://www.gnu.org/software/libc/manual/

- cppreference
  - https://en.cppreference.com/

### Tutorials & Articles

- Beej's Guide to C Programming
- GeeksforGeeks — Variadic Functions in C
- C Programming Language (Kernighan & Ritchie)

### AI Usage

AI (ChatGPT) was used as a supplementary learning and review resource.

Specifically, AI was used to:

- Explain how variadic functions (`va_list`, `va_start`, `va_arg`, and `va_end`) operate.
- Clarify the formatting logic of the standard `printf()` function.
- Explain hexadecimal and pointer conversions.
- Review the implementation for correctness and edge cases.
- Suggest improvements to memory management and project documentation.

All implementation, debugging, testing, and final code were completed by the author.
