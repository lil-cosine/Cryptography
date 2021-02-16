#Creates the cipher alphabet
def make_calph(KEY):
    alph = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    calph = ""
    for letter in range(len(alph)):
        calph = calph + alph[(letter+KEY)%26]
    return calph

#Decodes the message
def decode(cipherText, KEY):
    alph = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    calph = make_calph(KEY)
    plainText = ""
    for letter in range(len(cipherText)):
        plainText = plainText + alph[calph.find(cipherText[letter])]
    return plainText.lower()

#Plaintext and key to be passed through
cipherText = 'FLZ'
KEY = 7


print(decode(cipherText, KEY))
