
### Global Itens 

Every global itens should follow the following rules:

```c
<private?>_<lib>_<version>_<item_name>
```
exeample: 

your function calls list_files, and belongs to the lib  **dtw** and its version is **1.0.0** so the function name should be **dtw_1_0_0_list_files**.
if your function is private(only use internaly), you should add the **private** prefix, so the function name should be **private_dtw_1_0_0_list_files**.
These its usefull to avoid name colisions and to make the code more readable.
and it's easy to upgrade the version of the lib, just change the version number in the function name all at once.

### General Rules
 - avoid abbreviations
 - use descriptive names
 - use the same name for the same thing  (ex: if you have a function that list files, and another that list folders, use the same name for both **list_files** and **list_folders**)

### Functions
functions must be lower case and use underscore to separate words, and should be named after what they do, not how they do it.

example:

```c
void dtw_1_0_0_list_files();
```

### Structs
Structs should be named in CamelCase, and should be named after what they represent.
(note that private,lib and version also applies to structs)

example:

```c
typedef struct dtw_1_0_0_Point{
    int x;
    int y;
} dtw_1_0_0_Point;
```

### Local Variables
Variables should be named in lowercase letters, use underscores to separate words, should be named according to what they represent, and should have the name or acronym of the variable before it. Note that private, lib, and version do not apply to variables.
example:

```c
int dtw_folder_size = 0;
```

### Global Variables
Global variables should be named in lower case, and should be named after what they represent.
(note that private,lib and version also applies to global variables)

example:

```c    
int dtw_1_0_0_folder_size = 0;
```

