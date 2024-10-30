flowchart TD
    A[Start] --> B[Nhập số nguyên n]
    B --> C{n > 0?}
    C --> |Có| D[Lấy chữ số cuối b = n % 10, Cộng b vào s] 
    D --> E[Chia n cho 10, n = n / 10]
    E --> C
    C --> |Không| F{Tổng s >= 10?}
    F --> |Có| G[Lấy chữ số cuối d = s % 10, Cộng d vào c]
    G --> H[Chia s cho 10, s = s / 10] --> F
    F --> |Không| I[Tính s + c]
    I --> J[Kiểm tra với switch case]
    J --> |s + c = 0| K[In 'Đây là số bad'] --> End[End]
    J --> |s + c = 1 đến 5| L[In 'Đây là số meh'] --> End
    J --> |s + c = 6 đến 7| M[In 'Đây là số normal'] --> End
    J --> |s + c = 8| N[In 'Đây là số good'] --> End
    J --> |s + c = 9| O[In 'Đây là số excellent'] --> End