#utopian.rb

def regexmatch(str)
	pattern=/^[a-z]{0,3}[0-9]{2,8}[A-Z]{3}/
	if(pattern.match(str))
		puts "VALID"
		puts str
	else
		puts "INVALID"
		puts str
	end
end

testcases=gets.chomp.to_i
for i in (0..testcases) #remember range
	input = gets.chomp
	regexmatch(input)
end


