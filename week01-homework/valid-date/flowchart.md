flowchart TD
A([bat dau])-->B[/nhap vao ngay thang nam/]
B-->D[/nhap nam/]
D-->E[/nhap thang/]
E-->F{thang=1,3,5,7,8,10,12}
F--dung-->G[/nhap ngay/]
G-->J{1<=ngay<=31}
J--dung-->L[/day la ngay hop le/]-->END([end])
J--sai-->Z[/day khong phai ngay hop le/]-->END([end])
F--sai-->X{thang=4,6,9,11}
X-->V[1<=ngay<=30]
V--dung-->N[/day la ngay hop le/]-->END([end])
N--sai-->QW[/day khopng phai la ngay hop le/]-->END([end])
X--sai-->QE{thang=2}
QE--sai-->QR[/day khong phai ngay hop le/]-->END([end])
QE--dung-->QY[/nhap ngay/]-->QU{ngay=28}--dung-->QP[/day la ngay hop le/]-->END([end])
QU-->QO[/day khong phai ngay hop le/]-->END([end])