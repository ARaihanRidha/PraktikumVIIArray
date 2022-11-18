b = int (input())
matriksA=[]
print("Matriks A")
for i in range (b):
    S= list(map(int,input().split()))
    matriksA.append(S)
matriksB=[]
print("Matriks B") 
for i in range (b):
    S=list(map(int,input().split()))
    matriksB.append(S)
matriksAXB=[]
print("\n Matriks AXB")
for i in range (b):
     matriksAXB.append([])
     for j in range(b):
        x=0
        for S in range (b):
            x = x + matriksA[i][S] * matriksB[S][j]
        matriksAXB[i].append(x)
for baris in matriksAXB:
    for S in baris:
        print(S, end=' ')
    print()                

