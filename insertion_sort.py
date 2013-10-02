#!/bin/python

# Head ends here
def insertionSort(ar):    
    return ""

# Tail starts here
m = input()
ar = [int(i) for i in raw_input().strip().split()]
insertionSort(ar)

picked_number=ar[len(ar)-1]
                      
for i in range(len(ar)-2,-1,-1):
    if(i==0 and ar[i]>picked_number):
        ar[i+1]=ar[i]
        ar[i]=picked_number
        print ' '.join(str(n) for n in ar)
    elif(ar[i]>picked_number ):
        ar[i+1]=ar[i]   
        print ' '.join(str(n) for n in ar)
    elif(i==len(ar)-2 and ar[i]<picked_number):
        ar[i+1]=picked_number
        break
        print ' '.join(str(n) for n in ar)
    
    else:
        ar[i+1]=picked_number
        print ' '.join(str(n) for n in ar)
    
        
    

