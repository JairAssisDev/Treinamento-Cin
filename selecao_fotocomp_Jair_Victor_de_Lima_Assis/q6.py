def unir_caminhos(*caminhos):
    
    caminhos_limpos = [caminho.strip('/\\') for caminho in caminhos]
    
    caminho_unido = '/'.join(caminhos_limpos)
    
    return caminho_unido

while True:
    num_caminhos = int(input())
    if num_caminhos == -1:
        break
    
    caminhos = [input() for _ in range(num_caminhos)]
    resultado = unir_caminhos(*caminhos)
    print(resultado)
