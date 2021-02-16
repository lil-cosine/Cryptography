#base variables that control the alphabet and cipher text
alph = "abcdefghijklmnopqrstuvwxyz".upper()
calph= ""
pt= ""
inverse = 0

#user inputs
KEY = 9
shift = 16
ct = "KDRAV ADRAD F"

#finds inverse
for i in range(26):
  if(KEY*i%26) == 1:
    inverse = i

#makes alphabet
for letter in range(len(alph)):
  calph = calph + (alph[(inverse*(letter - shift)%26)])

#translates message to english
for letter in range(len(ct)):
  if ct[letter] == " ":
    pt = pt + " "
  else:
    pt = pt + calph[alph.index(ct[letter])]

#returns message
print(pt.lower())
