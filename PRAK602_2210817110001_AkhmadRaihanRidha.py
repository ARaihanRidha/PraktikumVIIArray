Kolom= int(input())
angka = list(map(int,input().split()))
matriks= []

a=0
for i in range (0,Kolom):
    matriks.append(angka[a:a+Kolom])
for i in range (0,Kolom):
    print(matriks[0][i] * (i + 1), end= ' ')    

