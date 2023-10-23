def count_substrings(k, word):
    if k == 0:
        return ""

    result = []
    for i in range(len(word)):
        for j in range(i+1, len(word)+1):
            substring = word[i:j]
            if all(substring.count(c) == k for c in set(substring)):
                result.append(substring)

    return " ".join(result)


while True:
    input_string = input().strip().split()
    k = int(input_string[0])
    if k == 0:
        break
    word = input_string[1]
    print(count_substrings(k, word))
