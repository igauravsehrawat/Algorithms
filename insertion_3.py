#!/bin/python

# Head ends here
def insertionSort(ar):    
    return ""

# Tail starts here
testcases=int(raw_input());
for k in range(1,testcases+1):

    m = input()
    ar = [int(i) for i in raw_input().strip().split()]
    insertionSort(ar)



    count =0
    length=len(ar)
    for j in range(1,length):
        picked_number=ar[j]
        #print ar[j]
        for i in range(j,0,-1):#opposite loop
            if(ar[i-1]>picked_number):
                ar[i]=ar[i-1]#swapping
                #keeping note of biggest number
                #commenting  bitch
                ar[i-1]=picked_number
                #print picked_number
                #print ' '.join(str(n) for n in ar)
                count=count+1;
                
                
            else:
                ar[i]=picked_number#found the right place and break the loop
                #print picked_number
                #print ' '.join(str(n) for n in ar)
                #count=count+1;
                break;
        
            
    print count    

