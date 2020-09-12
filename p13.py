def main():

    sum = 0
    with open("p13.txt", "r") as input_file:
        for line in input_file:
            sum += int(line)

    print(str(sum)[0:10])

main()