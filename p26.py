from math import sqrt

def find_period(n, d):
    z = x = n * 9
    k = 1
    while z % d:
        z = z * 10 + x
        k += 1

    digits = f"{z // d:0{k}}"
    return k, digits

def skip(n): 
    i = 1

    while i <= sqrt(n): 
         
        if (n % i == 0): 
            if (n / i == i): 
                if i == 2 or i == 5:
                    return True
            else: 
                if i == 2 or i == 5 or n/i == 2 or n/i == 5:
                    return True
        i = i + 1

    return False

def main():

    longest_period = 0
    d_longest_period = 0

    for d in range(2,1000):

        if skip(d):
            continue 

        period, cycle = find_period(1, d)

        if period > longest_period:
            longest_period = period
            d_longest_period = d

    print(d_longest_period)

main()