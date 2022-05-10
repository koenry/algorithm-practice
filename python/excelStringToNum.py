import string
alphabet = string.ascii_lowercase
givenString = 'BC' 
i = 1
ii = 1
num = 0


for w in alphabet:
    
    if (givenString[0] == str(w.upper())):
        if len(givenString) > 1:
            for x in alphabet:
                if (givenString[1] == str(x.upper())):
                    print(i * 26 + ii)
                ii+=1
        else:
            print(i)
            break
    i+=1



