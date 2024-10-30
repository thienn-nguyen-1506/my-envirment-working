flowchart TD
    A([Start]) --> B[/Nhập a và b/]
    B --> C{a >= b}
    C --> |dung| D[/ i = b/]
    C --> |sai| E[/ i = a/]
    D --> F{a % i == 0 và b % i == 0?}
    E --> G{a % i == 0 và b % i == 0?}
    F --> |dung| H[In UCLN là i] --> I([end])
    G --> |dung| H
    F --> |sai| J[i = i - 1] --> F
    G --> |sai| J2[i = i - 1] --> G
