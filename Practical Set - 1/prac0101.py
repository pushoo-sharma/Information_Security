key = int(raw_input("Enter the key : "))
key = int(key % 26)
msg = raw_input("Enter the message : ")
encrypted_msg = ""
for each_char in msg:
    if not each_char.isalpha():
        encrypted_msg += each_char
    else:
        temp = ord(each_char) + key
        if 90 >= ord(each_char) >= 65 and temp > 90:
            temp = temp - 91
            encrypted_msg += chr(ord('A') + temp)
        elif 122 >= ord(each_char) >= 97 and temp > 122:
            temp = temp - 123
            encrypted_msg += chr(ord('a') + temp)
        else:
            encrypted_msg += chr(temp)

print "Encrypted message is", encrypted_msg

decrypted_msg = ""

for each_char in encrypted_msg:
    if not each_char.isalpha():
        decrypted_msg += each_char
    else:
        temp = ord(each_char) - key
        if 90 >= ord(each_char) >= 65 and temp < 65:
            temp = temp + 26
            decrypted_msg += chr(temp)
        elif 122 >= ord(each_char) >= 97 and temp < 97:
            temp = temp + 26
            decrypted_msg += chr(temp)
        else:
            decrypted_msg += chr(temp)

print "Decrypted message is", decrypted_msg
