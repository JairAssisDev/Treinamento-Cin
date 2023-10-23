def verificador(N):
    produto = 1
    soma = 0
    for i in range(1, N + 1):
        produto *= i
        soma += i
    return "OK" if produto % soma == 0 else "NOTOK"

teste_num = int(input().strip())

for _ in range(teste_num):
    N = int(input().strip())
    resultado = verificador(N)
    print(resultado)
