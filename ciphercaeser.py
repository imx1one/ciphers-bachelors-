def cipher(text, shift):
    res = ' '
    for i, char in enumerate(text):
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            shiftch = chr((ord(char) - base +shift) % 26 + base)
        else:
            shiftch = char
        res += shiftch
    return res

print("Enter the text: ")
text = str(input())
print("Enter the key: ")
shift = int(input())
encrypttext = cipher(text, shift)
print("Encrypted text:", encrypttext)
        
    
