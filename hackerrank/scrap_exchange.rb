# Enter your code here. Read input from STDIN. Print output to STDOUT
#scrap_exchange.rb
#str="  <h3><a href="/questions/80407/
#about-power-supply-of-opertional-amplifier" class="question-hyperlink">about power supply of opertional amplifier</a></h3>"
def part_one(str)
	pattern_1=/(<h3><a\shref=\"\/questions\/(?<q_no>[0-9]*)\/)/ #groups ?<name>
	if (pattern_1.match(str))
		print pattern_1.match(str)[1]
		$stdout.flush
		print ";"
		
	end

     pattern_2=/(class=\"question-hyperlink\">(?<q_text>([0-9A-Za-z[:punct:]]+\s?)*)</a>)/ #alphanumeric
	if(pattern_2.match(str))
		
		print pattern_2.match(str)[1]
		print ";"
		return
	end

	pattern_3=/(class=\"relativetime\">(?<q_time>([0-9a-z]*\s?)*)<)/
	if (pattern_3.match(str))
		puts "#{pattern_3.match(str)[1]}"
		return
	end
end




#Real execution

#file = File.new("testcases.py","r")

ARGF.each_line do |line|
	part_one(line)
end