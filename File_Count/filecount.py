def number(numb):
    if(type(numb) not in [int]):
        raise TypeError("Number must be positive integer")
    elif(numb<1):
        raise ValueError("Number should not be negative!!!")
    return numb 
while(True):
    try:
        numb=int(input("\n How many times program will run??"))
        if(numb>0):
            break
        else:
            print("\nNumber should be positive integer")
    except:
        print("\nNumber is Invalid")

while(numb):
    input_string = input("\nEnter a Data:")
    
    while(True):
        searchword  = input("\n Enter a word :")

        words = []
        words = input_string.lower().split()
        words_freq=[words.count(i) for i in words]

        wordcountmapped=dict(zip(words,words_freq))

        if(searchword.lower() in wordcountmapped):
            print("\n word is :",searchword)
            print("\nNo of Occurrences:", wordcountmapped[searchword.lower()])
        else:
            print("\nWord is not present")

        ans=input("Do you want to continue searching in present data?(Y/N):")
        if(ans=='N' or ans=='NO' or ans=='n' or ans=='no'):
            break
         
    numb=numb-1

