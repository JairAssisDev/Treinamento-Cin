def anagramasT(p1, p2):
    p1 = p1.lower()
    p2 = p2.lower()
    return sorted(p1) == sorted(p2)


while True:
    try:
        entrada = input().strip().split()
        p1 = entrada[0]
        p2 = entrada[1]
        print(anagramasT(p1, p2))
    except EOFError:
        break
