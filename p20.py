def factorial(n):
    if n == 1:
        return n
    else:
        return n*factorial(n-1)

def main():

    f = factorial(100);
    
    sum = 0
    for digit in map(int, str(f)):
        sum += digit;

    print(sum)

main()