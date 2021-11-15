from random import choice
import string
#chars= 'abcdefghijklmnoprqstuvv123456788!@#$%^&*()'
chars=  string.digits + string.punctuation + string.alphabet 
password =""
for x in range(int(input('Enter password length: '))):
  password += choice(chars)
print(password)
  