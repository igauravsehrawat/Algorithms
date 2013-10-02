#!/bin/python

# Head ends here
def insertionSort(ar):    
    return ""

# Tail starts here
m = input()
ar = [int(i) for i in raw_input().strip().split()]
insertionSort(ar)


#for j in range (1,len(ar)):
 #   picked_number=ar[j]
  #  for i in range(0,j+1):
   #     if(ar[i]>ar[j]):
    #        stored=ar[i+1]
     #       ar[i+1]=a[i]
      #      ar[i]=a[j]
       # if(ar[i]==picked_number):
        #        print ' '.join(str(n) for n in ar)


length=len(ar)
for j in range(1,length):
    picked_number=ar[j]
    #print ar[j]
    for i in range(j,0,-1):#opposite loop
        if(ar[i-1]>picked_number):
            ar[i]=ar[i-1]#swapping
            #keeping note of biggest number
            biggest=ar[i-1]
            #commenting  bitch
            ar[i-1]=picked_number
            #print picked_number
            print ' '.join(str(n) for n in ar)
            
            
            
        else:
            ar[i]=picked_number#found the right place and break the loop
            #print picked_number
            print ' '.join(str(n) for n in ar)
            
            break;
    
        
   
