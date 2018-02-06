replacer = ['x', 'y']
def format(string):
    string = string.lower()
    formatted_string = ""
    for each_char in string:
        if each_char.isalnum():
            formatted_string += each_char
    return formatted_string

def create_matrix(key, numbers=False):
    key = format(key)
    if not numbers:
        string = "abcdefghiklmnopqrstuvwxyz"
        repeat = {}
        mat = [[], [], [], [], []]
        
    else:
        string = "abcdefghijklmnopqrstuvwxyz0123456789"
        repeat = {}
        mat = [[], [], [], [], [], []]
    for each_char in string:
        repeat[each_char] = False
    length = 0
    index = 0
    for each_char in key:
        if not repeat[each_char]:
            repeat[each_char] = True
            if len(mat[index]) < len(mat):
                mat[index].append(each_char)
            else:
                index += 1
                mat[index].append(each_char)

    for each_char in string:
        if not repeat[each_char]:
            repeat[each_char] = True
            if len(mat[index]) < len(mat):
                mat[index].append(each_char)
            else:
                index += 1
                mat[index].append(each_char)

    return mat

def divide(text, numbers=False):
    text = format(text)
    if numbers:
        text = text.replace('j', 'i')
    divided_text = []
    global replacer
    i = 0
    while i < len(text):
        if i+1 <len(text):
            if text[i] == text[i+1]:
                if text[i] == replacer[0]:
                    divided_text.append([text[i], replacer[1]])
                else:
                    divided_text.append([text[i], replacer[0]])
                i += 1
            else:
                divided_text.append([text[i], text[i+1]])
                i += 2
        else:
            if text[i] == replacer[0]:
                divided_text.append([text[i], replacer[1]])
            else:
                divided_text.append([text[i], replacer[0]])
            i += 1
    return divided_text
def encrypt(text, matrix, numbers=False):
    pairs = divide(text, numbers)
    mapping = dict()
    cipher = ''
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            mapping[matrix[i][j]] = [i, j]
    for each_pair in pairs:
        i, j = mapping[each_pair[0]]
        a, b = mapping[each_pair[1]]
        if a == i:
            if b+1 > len(matrix):
                b = 0
            else:
                b += 1
            if j+1 > len(matrix):
                j = 0
            else:
                j += 1
            cipher += matrix[i][j]
            cipher += matrix[a][b]
        elif j == b:
            if a+1 > len(matrix):
                a = 0
            else:
                a += 1
            if i+1 > len(matrix):
                i = 0
            else:
                i += 1
            cipher += matrix[i][j]
            cipher += matrix[a][b]
        else:
            cipher += matrix[i][b]
            cipher += matrix[a][j]
    return cipher

def decrypt(cipher, matrix, numbers=False):
    pairs = divide(cipher, numbers)
    mapping = dict()
    text = ''
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            mapping[matrix[i][j]] = [i, j]
    for each_pair in pairs:
        i, j = mapping[each_pair[0]]
        a, b = mapping[each_pair[1]]
        if a == i:
            if b+1 > len(matrix):
                b = len(matrix) - 1
            else:
                b -= 1
            if j+1 > len(matrix):
                j = len(matrix) - 1
            else:
                j -= 1
            text += matrix[i][j]
            text += matrix[a][b]
        elif j == b:
            if a+1 > len(matrix):
                a = len(matrix) - 1
            else:
                a -= 1
            if i+1 > len(matrix):
                i = len(matrix) - 1
            else:
                i -= 1
            text += matrix[i][j]
            text += matrix[a][b]
        else:
            text += matrix[i][b]
            text += matrix[a][j]
    return text
            
    
key = input("Enter the key : ")
matrix = create_matrix(key, True)
plain_text = input("Enter message : ")
cipher = encrypt(plain_text, matrix, True)
print("Encrypted message is",cipher)
message = decrypt(cipher, matrix, True)
print("Decrypted message is", message)
