

### Dependencie Injection
Every Function must be able to be injected by the user, so the code can be tested and run in any plataform.

These example: [dependencie_injections_default](/samples/dependencie_injections_default/main.c), import the **printf** and **malloc** as the default functions, but the user can inject any function that has the same signature.

compile with:
```bash
gcc  samples/dependencie_injections_default/main.c samples/dependencie_injections_default/dtw.c
```


### Dependencie Injection with Mocks
if you want you can mock any import function, to test your code, or to run in a different platform. (Note That you will need to implement the mock functions)

These example: [dependencie_injections_mock_fail](/samples/dependencie_injections_mock_fail/main.c), fails because **malloc** is not implemented.

compile with:
```bash
gcc  samples/dependencie_injections_mock_fail/main.c samples/dependencie_injections_mock_fail/dtw.c
```
it will evaluate after runing to:
```bash
Error: malloc function is NULL
```