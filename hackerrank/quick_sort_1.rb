def print_and_flush(str)
	$stdout.flush
  print str 
  print " "
  $stdout.flush
end



def  partition( ar) 
	$stdout.flush

	#puts ar[0]
	len = ar.length
	for i in 1..len
		if(ar[i].to_i < ar[0].to_i)
			print ar[i]
			print " "
		end
	end
	print_and_flush(ar[0])
	for i in 1..len
		if(ar[i].to_i > ar[0].to_i)
			print_and_flush(ar[i])
		end
	end
	$stdout.flush

end

cnt = gets.to_i;
ar = STDIN.gets.chomp.split(" ");
$stdout.flush
partition(ar);

