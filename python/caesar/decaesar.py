#Creates the cipher alphabet
alph = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
def make_calph(KEY):

    calph = ""
    for letter in range(len(alph)):
        calph = calph + alph[(letter+KEY)%26]
    return calph

#Decodes the message
def decode(cipherText, KEY):

    calph = make_calph(KEY)
    plainText = ""
    for letter in range(len(cipherText)):
        plainText = plainText + alph[calph.find(cipherText[letter])]
    return plainText.lower()

#Plaintext and key to be passed through
cipherText = 'FLZZP Y'
KEY = 7

print(decode(cipherText.replace(" ", ""), KEY))
