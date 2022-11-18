Kolom,baris = map(int,input().split())
Angka= list(map(int,input().split()))
matriks= []
a=0
for i in range (Kolom):
    matriks.append(Angka[a:a+baris])
    a = a + baris
for kolom in matriks:
    for Angka in kolom:
        print(Angka, end=' ')
    print()    

  

