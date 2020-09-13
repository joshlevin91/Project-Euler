def main():

    n = 20
    ans = 1

    # Number of unique permutations of 20 right and 20 down moves
    for i in range(1, 2*n+1):
        ans = ans*i

    for k in range(2):
        for i in range(1, n+1):
            ans = int(ans/i)

    print(ans)

main()