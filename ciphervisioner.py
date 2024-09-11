def cipher(text, key):
    res = ' '
    keyid = 0
    for i, char in enumerate(text):
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            shift = ord(key[keyid].upper()) - base
            shiftch = chr((ord(char) - base +shift) % 26 + base)
        else:
            shiftch = char
        res += shiftch
        keyid = (keyid + 1) % len(key)
    return res
print("Enter the text: ")
text = str(input())
print("Enter the key: ")
key = str(input())
encrypttext = cipher(text, key)
print("Encrypted text:", encrypttext)
