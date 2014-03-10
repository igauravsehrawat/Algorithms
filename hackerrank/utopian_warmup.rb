#ruby

#get testcases
testcases= gets.chomp.to_i
while testcases>0
	height=1
	input = gets.chomp.to_i

	for i in 1..input
		if i%2 == 0
			height = height+1
		else
			height= height *2
		end
	end
	puts height
	testcases=testcases-1
end

