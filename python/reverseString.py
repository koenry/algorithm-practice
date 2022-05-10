def reverse(a):
    
    word = ''
    i = 1
    for w in range(len(a)):
        word = word + a[len(a)-i]
        i+=1
    print(word)


reverse('long string')
