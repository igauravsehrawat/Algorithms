#ice-cream_parlor.rb

def pairs(passed_ar,money)
	#puts passed_ar
	passed_ar.sort_by(&:to_i)
	len = passed_ar.length
	#puts passed_ar
	for i in 0..len-1
		if(passed_ar[i]< money)
			for j in i..len-1
				#puts "#{passed_ar[i]} #{passed_ar[j]}"
				if(passed_ar[i] + passed_ar[j] == money && (j != i))
					modified_i = i+1 
					modified_j= j+1
					puts "#{modified_i} #{modified_j}"
				end
			end
		end
	end
end

testcases=gets.chomp.to_i

for i in 0..testcases-1
	money = gets.chomp.to_i #int
	total = gets.chomp.to_i #int
	arr = gets.chomp
	#print arr
	num_array = arr.split(" ").map  {|str| str.to_i}
	#print num_array
	pairs(num_array,money)
end



#data type with every field