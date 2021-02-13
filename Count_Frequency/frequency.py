def frequencyDigits(n, d): 
      
    
    c = 0; 
      
    
    while (n > 0):  
          
        
        if (n % 10 == d): 
            c += 1; 
        
        n = int(n / 10); 
  
    return c; 

print("frequency of 1 in number 11134 is : % d" % (frequencyDigits(11134,1)))
