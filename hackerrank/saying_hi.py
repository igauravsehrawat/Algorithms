import re
def check_hi(str):
	p=re.compile('^hi\s+[^d](([a-z]+\s?)*)$',re.IGNORECASE) #why to use //
	if p.match(str):#regex matches any part ..i want specific part to be matched
		print str
	

testcases=int(raw_input())
for i in range(0,testcases):
	str = raw_input()
	check_hi(str)	