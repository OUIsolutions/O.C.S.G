

### Dependencie Injection
Every Function must be able to be injected by the user, so the code can be tested and run in any plataform.

These example: [dependencie_injections_default](/samples/dependencie_injections_default/main.c), import the **printf** and **malloc** as the default functions, but the user can inject any function that has the same signature.

compile with:
```bash
gcc  samples/dependencie_injections_default/main.c samples/dependencie_injections_default/dtw.c
```


### Dependencie Injection with Mocks
if you want you can mock any import function, to test your code, or to run in a different platform. (Note That you will need to implement the mock functions)

These example: fails because **malloc** is not implemented.

compile with:
```bash
gcc  samples/dependencie_injections_default/main.c samples/dependencie_injections_default/dtw.c -DDTW_1_0_0_MOCK_STDLIB_H
```
it will evaluate after runing to:
```bash
Error: malloc function is NULL
```
### Dependencie Injection with Mocks and Custom Functions
You can also inject custom functions, to test your code, or to run in a different platform. (Note That you will need to implement the custom functions)
In the example of [dependencie_injections_custom_malloc](/samples/dependencie_injections_custom_malloc/main.c), we inject a custom malloc function.

compile with:
```bash
gcc  samples/dependencie_injections_custom_malloc/main.c samples/dependencie_injections_custom_malloc/dtw.c -DDTW_1_0_0_MOCK_STDLIB_H
```
it will evaluate after runing to:
```bash
Hello
stack_point: 10
```