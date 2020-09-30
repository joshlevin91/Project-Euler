coins = [1, 2, 5, 10, 20, 50, 100, 200]

def coin_combs(total, k):
    
    if total < 0 or k < 0:
        return 0
    if total == 0:
        return 1

    return coin_combs(total, k-1) + coin_combs(total - coins[k], k)

def main():
    print(coin_combs(200,len(coins)-1))

main()