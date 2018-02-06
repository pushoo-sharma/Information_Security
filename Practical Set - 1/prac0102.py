def mapping():
    mapped = dict()
    original = "ABCDEFGHIJKLMNOPQRSTUVWXYZ "
    cipher = " SWNAMLXCVJBUYKPDOQERIFHGZT"
    for i in range(len(cipher)):
        mapped[original[i]] = cipher[i]
        mapped[original[i].lower()] = cipher[i].lower()
    return mapped


def encrypt(msg, str_map):
    encrypted = ""
    for each_char in msg:
        if each_char.isalpha() or each_char == ' ':
            encrypted += str_map[each_char]
    return encrypted


def decrypt(msg, str_map):
    decrypted = ""
    decrypt_map = dict()
    for key in str_map:
        decrypt_map[str_map[key]] = key
    for each_char in msg:
        if each_char.isalpha() or each_char == ' ':
            decrypted += decrypt_map[each_char]
    return decrypted


map_dict = mapping()
message = raw_input("Enter your message : ")
encrypted_message = encrypt(message, map_dict)
print "Encrypted message is", encrypted_message
decrypted_message = decrypt(encrypted_message, map_dict)
print "Decrypted message is", decrypted_message
