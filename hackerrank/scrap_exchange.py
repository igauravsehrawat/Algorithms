import re
def check_hi(str):
	question="<a.+?>(.+?)</a>$"
	p=re.compile(question,re.IGNORECASE) #why to use //
	output=p.findall(str)#regex matches any part ..i want specific part to be matched
	print output
	#print str
	



str = raw_input()
check_hi(str)	