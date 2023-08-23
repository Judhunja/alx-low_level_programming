# 0x1C. C - Makefiles
## Tasks

### 0. make -f 0-Makefile
-   name of the executable: `school`
-   rules: `all`
    -   The `all` rule builds your executable
-   variables: none
```
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
```



### 1. make -f 1-Makefile
-   name of the executable: `school`
-   rules: `all`
    -   The `all` rule builds your executable
-   variables: `CC`, `SRC`
    -   `CC`: the compiler to be used
    -   `SRC`: the `.c` files


### 2. make -f 2-Makefile
-   name of the executable: `school`
-   rules: `all`
    -   The `all` rule builds your executable
-   variables: `CC`, `SRC`, `OBJ`, `NAME`
    -   `CC`: the compiler to be used
    -   `SRC`: the `.c` files
    -   `OBJ`: the `.o` files
    -   `NAME`: the name of the executable

### 3. make -f 3-Makefile
-   name of the executable: `school`
-   rules: `all`, `clean`, `oclean`, `fclean`, `re`
    -   `all`: builds your executable
    -   `clean`: deletes all Emacs and Vim temporary files along with the executable
    -   `oclean`: deletes the object files
    -   `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    -   `re`: forces recompilation of all source files
-   variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    -   `CC`: the compiler to be used
    -   `SRC`: the `.c` files
    -   `OBJ`: the `.o` files
    -   `NAME`: the name of the executable
    -   `RM`: the program to delete files

### 4. A complete Makefile

-   name of the executable: `school`
-   rules: `all`, `clean`, `fclean`, `oclean`, `re`
    -   `all`: builds your executable
    -   `clean`: deletes all Emacs and Vim temporary files along with the executable
    -   `oclean`: deletes the object files
    -   `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    -   `re`: forces recompilation of all source files
-   variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    -   `CC`: the compiler to be used
    -   `SRC`: the `.c` files
    -   `OBJ`: the `.o` files
    -   `NAME`: the name of the executable
    -   `RM`: the program to delete files
    -   `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`


