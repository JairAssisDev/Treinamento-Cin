def calculate_average_key_presses(dictionary):
    total_key_presses = 0
    total_words = 0
    
    for word in dictionary:
        key_presses = len(word)  
        prefix = word[0]  
        for letter in word[1:]:
            is_prefix = any(w.startswith(prefix + letter) for w in dictionary)
            if is_prefix:
                prefix += letter 
            else:
                key_presses += 1  
                prefix = letter  
        total_key_presses += key_presses
        total_words += 1
    
    return total_key_presses / total_words


while True:
    n = int(input())
    if n == -1:
        break
    
    dictionary = []
    for _ in range(n):
        word = input()
        dictionary.append(word)
    
    average_key_presses = calculate_average_key_presses(dictionary)
    print(f'{average_key_presses:.2f}')