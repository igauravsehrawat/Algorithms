#separate function for problem logic
#don't debug in irb unless you know what's there for you. #dumb
def yesorno(some_string)
	count=0
	counter_count=0
	f=File.open(some_string,"r")
	sizer=f.size
	f.each_line do|line|

		for i in 1..line.size do
			if(line[i]=="#")
				count=count+1#counting first occurence of # in any of the line and then exit
			end
			position=(/#/ =~ line)
			if count>0
				break
			end
		end
	end


		for j in 1..count do

			for k in f[i+1..size] do #for next occurences of the # checking if they match with it or not.
				for l in f[k] do #check same occurence in line2
					if(l=="#")
					counter_count=counter_count+1#counting first occurence of # in any of the line and then exit
				
					end #line loop
					counter_position=(/#/=~f[k])

					if (counter_count==count && counter_postion==positon)
						
					else
						return "NO"
						break
					end

				if(j==count)
					return "YES"
				end
			end

				
		end		
	end


end	


testcases=gets.to_i
 #testcases-- don't work in ruby
 while(testcases>0)
filename="square_detector_example_input.txt"
yesorno(filename)
testcases=testcases-1
end


