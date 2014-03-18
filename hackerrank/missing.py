#missing.py
from collections import defaultdict

first_series=int(raw_input())
cin1  = [int(i) for i in raw_input().strip().split()]
second_series= int(raw_input())
cin2= [int(i) for i in raw_input().strip().split()]

series1= defaultdict(int)
series2= defaultdict(int)

for item in cin1:
	series1[item]+=1 #+= it is 
for item in cin2:
	series2[item]+=1 
#print series2[1]
#print series1 #check cases
for item in series2:
	if (series1[item] != series2[item]):
		print item,


