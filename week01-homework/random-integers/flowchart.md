flowchart TD
A([bat dau])-->B[/nhap so so ngau nhien ban muon co la n so/]
B-->C[/i=1/]
C-->D[tao mot so ngau nhien la xi]
D-->E{n>=i}
E--dung-->F[/xuat ra man hinh so xi/]
F-->Q[i=i+1]
Q-->D
E--sai-->W([end])