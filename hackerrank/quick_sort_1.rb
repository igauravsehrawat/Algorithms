def  partition( ar) 
	#puts ar[0]
	len = ar.length
	for i in 1..len
		if(ar[i].to_i < ar[0].to_i)
			print ar[i]
			print " "
		end
	end
	$stdout.flush
	print ar[0] 
	print " "
	for i in 1..len
		if(ar[i].to_i > ar[0].to_i)
			print ar[i]
			print " "
		end
	end
	$stdout.flush

end

cnt = gets.to_i;
ar = STDIN.gets.chomp.split(" ");
partition(ar);

