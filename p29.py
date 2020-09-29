def main():

    end = 100
    terms = set()

    for a in range(2, end+1):
        for b in range(2, end+1):
            terms.add(a**b)

    print(len(terms))


main()