#utopian2.rb

def regexmatch(str)
	pattern=/^[a-z]{0,3}[0-9]{2,8}[A-Z]{3,}$/ #correct for the last pattern
	if(pattern.match(str))
		puts "VALID"
#		puts str
	else
		puts "INVALID"
#		puts str
	end
end

testcases=gets.chomp.to_i
for i in (0..testcases-1) #remember range
	input = gets
	regexmatch(input)
end


