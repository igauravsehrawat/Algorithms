#class halloween_party
def candies(cuts)
		if(cuts%2 ==0)
		chocs=(cuts/2) ** 2
		else
		chocs=(cuts/2) ** 2 + (cuts/2)
		end
		return  chocs
end
#end
a=gets.to_i
while(a>0)
b=gets.to_i
puts candies(b)
a=a-1
end


	
	



