A=0
B=0
Char1=list(input(""))
Char2=list(input(""))
long1= len(Char1)
long2= len(Char2)

if long1 != long2:
    print("Panjang kalimat berbeda,pesan palsu")
else:
    for i in range (long1):
        if " "in Char1[i] and " "in Char2[i]:
            continue    
        elif Char1[i] == Char2[i]:
            print("*",end="")
            A += 1

        else:
            print("#", end="")
            B += 1
    print("\n* = ", A)
    print("# = ",B)
if A >= B:
    print("Pesan Asli")
else:
    print("Pesan Palsu")                