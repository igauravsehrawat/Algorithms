#!/bin/python

# Head ends here
def insertionSort(ar):    
    return ""

# Tail starts here
m = input()
ar = [int(i) for i in raw_input().strip().split()]
insertionSort(ar)
length=len(ar)
for j in range(1,length-1)
    picked_number=ar[j]
                          
    for i in range(j,0,-1):#opposite loop
        if(ar[i-1]>picked_number):
            ar[i]=ar[i-1]#swapping
            #commenting  bitch
            ar[i-1]=picked_number
            print ' '.join(str(n) for n in ar)
            
        else:
            ar[i]=picked_number#found the right place and break the loop
            print ' '.join(str(n) for n in ar)
            break;
        
        
    
