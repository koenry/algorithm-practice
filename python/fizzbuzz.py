arr = [1,2,3,5,6,7,10,15]


for w in arr:
    if (w % 3 == 0 and w % 5 == 0):
        print('fizzbuzz')
    elif (w % 3 == 0):
        print('fizz')
    elif (w % 5 == 0):
        print('fizz')
