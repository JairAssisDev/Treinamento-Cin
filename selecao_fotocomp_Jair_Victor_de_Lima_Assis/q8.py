def common_factors(a, b):
    min_num = min(a, b)

    common_factors = 0
    for i in range(1, min_num + 1):
        if a % i == 0 and b % i == 0:
            common_factors += 1
    return common_factors

n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    if 1 <= a <= 10*5 and 1 <= b <= 10*5:
        factors = common_factors(a, b)
        print(factors)
    else:
        print(0)