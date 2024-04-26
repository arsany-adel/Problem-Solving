size, k = map(int, input().split()) 
arr = list(map(int, input().split()))
score = [0] * k

for i in range(k):
    for j in range(i, size + i, k):
        score[i] += arr[j % size]

print( score.index(min(score)) + 1 ) 