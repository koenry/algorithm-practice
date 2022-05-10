main = 1
a = 1
counter = 0
while True:
    if ( a == 1):
        print(main)
        main+=1
        a = main
        counter = 0
        
    elif (a % 2 == 1):
        a = a * 3 + 1
        counter+=1
        
      
    elif (a % 2 == 0):
        a = a / 2
        counter+=1
        
