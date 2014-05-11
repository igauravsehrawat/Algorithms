=begin
	
rescue Exception => e
	
end
# Read input from stdin and provide input before running code
=end

#print  " Please enter your name: "
def not_divisible_10(number)
	if(number%10)
		return false
	else
		return true
	end
end

def find_pages(number)
remainder = number % 12
pages = 0

	#not working
	# if(number < 60)
	# 	while(remainder != 0)
	# 		remainder = number%10 
	# 		pages = pages + number/10
	# 		remainder = remainder%12
	# 		pages = pages + remainder/12
	# 	end
	# end
	if(number % 2 !=0)
		return -1
	end
	
	while(not_divisible_10(remainder))

		pages = number / 12
		number = number -10
		remainder = number % 12

	end

	pages = pages + number / 10
	return pages
end

def main(testcases)
	while(testcases!=0)
		testcases =testcases -1
		number = gets.chomp.to_i
		puts find_pages(number)
	end
end

testcases = gets.chomp.to_i
main(testcases)