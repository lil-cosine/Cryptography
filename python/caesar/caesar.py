#Creates the cipher alphabet
alph = 'abcdefghijklmnopqrstuvwxyz'
def make_calph(KEY):

    calph = ""
    for letter in range(len(alph)):
        calph = calph + alph[(letter+KEY)%26]
    return calph

#Encodes the message
def encode(plainText, KEY):

    calph = make_calph(KEY)
    cipherText = ""
    for letter in range(len(plainText)):
        cipherText = cipherText + calph[alph.find(plainText[letter])]
        if (letter+1)%5 == 0:
            cipherText += " "
    return cipherText.upper()

#Plaintext and key to be passed through
plainText = 'yessir'
KEY = 7

print(encode(plainText, KEY))
