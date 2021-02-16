#Creates the cipher alphabet
def make_calph(KEY):
    alph = 'abcdefghijklmnopqrstuvwxyz'
    calph = ""
    for letter in range(len(alph)):
        calph = calph + alph[(letter+KEY)%26]
    return calph

#Encodes the message
def encode(plainText, KEY):
    alph = 'abcdefghijklmnopqrstuvwxyz'
    calph = make_calph(KEY)
    cipherText = ""
    for letter in range(len(plainText)):
        cipherText = cipherText + calph[alph.find(plainText[letter])]
    return cipherText.upper()

#Plaintext and key to be passed through
plainText = 'yes'
KEY = 7

print(encode(plainText, KEY))
