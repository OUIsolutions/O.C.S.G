

### Dependencie Injection
Every Function must be able to be injected by the user, so the code can be tested and run in any plataform.

Thexe example: [main.c](/samples/dependencie_injections_default/main.c), import the **printf** and **malloc** as the default functions, but the user can inject any function that has the same signature.

