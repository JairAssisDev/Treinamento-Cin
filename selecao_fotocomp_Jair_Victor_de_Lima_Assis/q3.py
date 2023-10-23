def calcular_EQM(val):
    N = len(val)
    med = sum(val) / N
    eqm = sum([(x - med) ** 2 for x in val]) / N
    return round(eqm, 2)

teste_num = int(input().strip())

for _ in range(teste_num):
    val = list(map(float, input().strip().split()))
    print(calcular_EQM(val))
