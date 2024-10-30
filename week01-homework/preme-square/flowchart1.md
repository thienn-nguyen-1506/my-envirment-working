flowchart TD
A([bat dau])-->B[/nhap so n ma ban muon kiem tra/]
B-->C{neu n=1 hoac n=2 hoac n=3}
C--dung-->D[/day la so nguyen to/]-->E([end])
C--sai-->F[/i=3/]
F-->G{n chia het cho i-1}
G--dung-->H[/day khong phai la so nguyen to/]
G--sai-->K[i=i+1]-->L{n>=i}
L--dung-->G
L--sai-->Z[/day la so nguyen to/]-->E([end])

