def reverseWords(s:str) -> str:
	s = s.split() # ["the","sky","is","blue"]
	s = s[::-1] # ["blue","is","sky","the"]
	return " ".join(s) # "blue is sky the"
