def main():

    n = 2**1000

    dig_sum = 0
    for dig in str(n):
        dig_sum += int(dig)

    print(dig_sum)

main()