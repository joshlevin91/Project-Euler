dig_count = {
    1:3,
    2:3,
    3:5,
    4:4,
    5:4,
    6:3,
    7:5,
    8:5,
    9:4,
    10:3,
    11:6,
    12:6,
    13:8,
    14:8,
    15:7,
    16:7,
    17:9,
    18:8,
    19:8,
    20:6,
    30:6,
    40:5,
    50:5,
    60:5,
    70:7,
    80:6,
    90:6,
    'hundred':7,
    'thousand': 8,
    'and':3
}

def count_one_dig(n):
    return dig_count[n]

def count_two_dig(n):
    if n < 20:
        return dig_count[n]

    else:
        first_dig = int(str(n)[0])
        second_dig = int(str(n)[1])

        count = dig_count[first_dig*10]

        if second_dig != 0:
            count += dig_count[second_dig]

        return count

def main():

    count = 0
    n = 1000

    for i in range(1, n+1):

        num_digits = len(str(i))

        if num_digits == 1:
            count += count_one_dig(i)

        elif num_digits == 2:
            count += count_two_dig(i)

        elif num_digits == 3:

            first_dig = int(str(i)[0])
            second_dig = int(str(i)[1])
            third_dig = int(str(i)[2])

            count += dig_count[first_dig] + dig_count['hundred']

            if second_dig == 0 and third_dig == 0:
                continue
            else:
                count += dig_count['and']
                if second_dig == 0:
                    count += count_one_dig(third_dig)
                else:
                    count += count_two_dig(int(str(i)[1:]))

        else: 
            count += dig_count[1] + dig_count['thousand']

    print(count)

main()