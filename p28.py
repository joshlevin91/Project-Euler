def main():

    sum = 1
    n = 1
    k = 1
    end = 1001

    for i in range(3, end+1, 2):

        a = 2*k
        for _ in range(4):
            n += a
            sum += n
        k += 1

    print(sum)

main()