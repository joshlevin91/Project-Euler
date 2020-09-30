def main():

    k = 5
    n = 2
    total_sum = 0
    
    while n <= 999999:

        sum = 0
        digits = [int(d) for d in str(n)]
        for digit in digits:
            sum += digit**k

        if n == sum:
            total_sum += sum

        n += 1

    print(total_sum)

main()