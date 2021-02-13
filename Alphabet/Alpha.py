def number(numb):
    if(type(numb) not in [int]):
        raise TypeError("Number should be positive")
    elif(numb<1):
        raise ValueError("Number should not be negative")
    return numb 
while(True):
    try:
        numb=int(input("\n How many times program will run ??"))
        if(numb>0):            
            break               
        else:
            print("\nNumber should be integer ")
    except:
        print("\n Number is Invalid")

while(numb):
    char=input("\n Please Enter a Character:")
    if(len(char)>1):
       
        print("It will check only first character is alphabet or not.")
    if(char[0].isalpha()==True):
        print("\n Given Character is Alphabet")
    else:
        print("\n Given Character is not Alphabet")
    numb=numb-1
