# Oui C Specification Guide
These Repo Specify the Oui C Language Especification with best practices and examples.

## Rules
These its the rules for the especification,organized by priority, in case of one 
less important rule conflict with a more important rule, the more important rule should be followed.

### 1. Plataform Independency
The code should be able to run in any plataform that has a C compiler,so all **Impure Functions** should able to be injected by the user.

### 2. Uncolisness
The code should never colide with other code , with other versions of the same code or with language features.

### 4. Out of the box
The code should be able to run without any configuration, but should be able to be configured (rule:Plataform Independency).

### 5. Public API First
The code should prioritize the public API over the internal API,in terms of
ease of use and documentation.

## Itens
| Item | Description | 
| --- | --- |
| [naming.md](/naming.md) | Naming of variables and functions |
| [initialization.md](/initialization.md) | Initialization of itens |
| [dependencie_injection.md](/dependencie_injection.md) | Dependencie Injection |