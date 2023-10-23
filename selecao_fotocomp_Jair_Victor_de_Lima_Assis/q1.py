def fatorial(n):
    return 1 if n == 0 else n * fatorial(n-1)

while True:
    try:
        entrada = input().strip().split()
        soma = 0
        for numero in entrada:
            numero = int(numero)
            soma += fatorial(numero)
        print(soma)
    except EOFError:
        break
