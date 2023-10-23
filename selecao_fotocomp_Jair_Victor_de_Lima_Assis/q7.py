def calculate_histogram(image):
    height, width = len(image), len(image[0])

    histogram = [0] * 256

    total_pixels = height * width
    for row in image:
        for pixel in row:
            histogram[pixel] += 1

    probabilities = [count / total_pixels for count in histogram if count > 0]

    return probabilities

while True:
    n, m, p = map(int, input().split())
    if n == -1:
        break

    image = []
    for _ in range(n):
        row = list(map(int, input().split()))
        image.append(row)

    histogram = calculate_histogram(image)
    formatted_histogram = ["{:.2f}".format(prob) for prob in histogram]
    print(" ".join(formatted_histogram))