#input
input= gets.chomp
len = input.length.to_i
#need to use hash here
counter = 0
counter_alphas = Hash.new

for i in (0..len-1)

	counter_alphas[input[i]] = counter_alphas[input[i]].to_i + 1
end

counter_alphas.each do |key,value|
	#it is && and not & ..c++ guy
	#puts "#{key} and #{value}"
	if ((value.to_i % 2!=0) )
		counter = counter +1
		if (counter > 1)
			puts "NO";
			exit
		end
	end
end 

puts "YES"

