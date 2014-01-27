

space_string = raw_input()
count=0
for i in space_string:
	if ( i == " "):
		count=count+1

no_space_string=""

for i in space_string:
	if (i ==" "):
		no_space_string += "%20"
	else:
		no_space_string += i

	
print no_space_string