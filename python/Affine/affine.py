#base variables that control the alphabet and cipher text
alph = "abcdefghijklmnopqrstuvwxyz"
text= ""
ct= ""

#user inputs
KEY = 7
shift= 9
pt = "magical"

#makes alphabet
for letter in range(len(alph)):
  text = text + (alph[(((letter * KEY) + shift)%26)])

#translates the message
for letter in range(len(pt)):
  ct = ct + text[alph.index(pt[letter])]

#prints message
print(ct.upper())
