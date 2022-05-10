nums = [11,15,7,2]
sumTwo = 26

i = 0
x = 0
stopper = ''
for w in nums:
    i+=1
    x+=1
    
    for x in range(i, len(nums)):
        
        if (w+nums[i] == sumTwo): 
            print(i-1,i)
            break
    
    
      

   
   
