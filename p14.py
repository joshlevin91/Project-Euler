def main():

    longest_chain = 0
    starting_num = None

    for s in range(1, 999999):

        n = s
        i = 1

        while n != 1:

            if n % 2 == 0:
                n = n / 2
            else:
                n = 3*n + 1

            i += 1

        if i > longest_chain:
            longest_chain = i
            starting_num = s

    print(starting_num)

main()