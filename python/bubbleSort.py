arr = [16,-5, 5 , 3]

arr[0], arr[0 + 1] = arr[0+1], arr[0]


for w in range(len(arr)-1):
    for x in range(len(arr)-1): 
        if arr[w] > arr[w+1]:
            arr[w], arr[w + 1] = arr[w+1], arr[w]



print(arr)
