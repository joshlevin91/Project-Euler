def main():
    F = 1
    Fm1 = 0
    i = 1
    while (len(str(F))) < 1000:
        temp = F
        F = F + Fm1
        Fm1 = temp
        i += 1
    print(i)

main()