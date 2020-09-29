def is_prime(n):

    if n > 1:
       for i in range(2,n):
           if (n % i) == 0:
               return False
       else:
           return True
    else:
       return False

def main():

    max_num_primes = 0
    product = None

    for a in range(-999, 1000):
        for b in range(-1000, 1001):

            n = 0
            while True:
                if is_prime(n*n + a*n + b):
                    n += 1
                else:
                    break

            if n > max_num_primes:
                max_num_primes = n
                product = a*b

    print(product)

main()