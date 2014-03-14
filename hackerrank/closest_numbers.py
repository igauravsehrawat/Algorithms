import sys

def min_dif(arr):
	min=arr[1]-arr[0]
	len1= len(arr)
	for i in range(0,len1-1):
		if(arr[i+1]-arr[i]<min):
			min=arr[i+1]-arr[i]

	return min

def print_pair(arr):
	#print "reached first"
	len2=len(arr)
	threshold=min_dif(arr)
	#print "reached second "+ str(threshold)
	for i in range(0,len2-1):
		if(arr[i+1]-arr[i]==threshold):
			#print (str(arr[i])+' '+ str(arr[i+1])+ ' '),
			sys.stdout.write(str(arr[i])+' '+ str(arr[i+1])+ ' ')
#			if(i!=len2-1):print " "


testcases=1
numbers=int(raw_input())
#arr= [numbers]
#for i in range(0,numbers): #fucking range
b=raw_input()
arr=[int(i) for i in b.strip().split()] #use append to assign !! really
arr=sorted(arr)
#print(arr)
print_pair(arr)





##damn ..whoof the basics only needed