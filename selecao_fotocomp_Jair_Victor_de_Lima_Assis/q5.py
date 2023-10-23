def conta_caracter(texto):
    texto = texto.replace(" ", "").replace("\n", "")
    
    contagem_caracteres = {}
    
    for char in texto:
        if char in contagem_caracteres:
            contagem_caracteres[char] += 1
        else:
            contagem_caracteres[char] = 1
    
        contagem_caracteres_ordenada = dict(sorted(contagem_caracteres.items(), key=lambda item: (-item[1], item[0])))
    
    return contagem_caracteres_ordenada


num_testes = int(input())
for _ in range(num_testes):
    texto = input()
    contagem_caracteres = conta_caracter(texto)
    
    for char, contagem in contagem_caracteres.items():
        print(f"{char} {contagem}")
    
    print(-1)
