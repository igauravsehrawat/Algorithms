def square_detector(some_string)
  file_handle=some_string
  file=IO.readlines(file_handle)
  previous_line=nil
  file.each{|line|
    a=(/##/ =~ previous_line)
    b=(/##/ =~ line)
    if a==b
      return #{a b}
      else 
    end  
      previous_line=line
   }
  return #{a b}

end


input=gets.to_i
while(input>0)
  lines=gets.to_i
  f=File.new("fbhc_detector.txt","a+")
  
  while(lines>0)
    boxes=gets.to_s
    f.puts(boxes)
    lines=lines-1
     end
  f.close
  
  puts square_detector("fbhc_detector.txt")
  File.new("fbhc_detector.txt","w+")
  input=input-1
end
