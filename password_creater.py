import string
import random

def password_genetor():
    s1 = string.ascii_letters
    s2 = string.digits
    s3 = string.punctuation
    s = []
    s.extend(list(s1))
    s.extend(list(s2))
    s.extend(list(s3))
    random.shuffle(s)
    nth_number = int(input("No.of digits of password\n"))
    what_is_the_password_for = input("what is the password for\n")
    password = ("".join(s[0:nth_number]))
    # print(password)
    try:
        with open("Password.txt","r+") as f:
            f.write(f"{password} : {what_is_the_password_for}\n") 
            fjsl = f.readline()
            print(fjsl)
    except Exception as e:
        with open("Password.txt","w") as f:
            f.write(f"{password} : {what_is_the_password_for}\n") 
            # fjsl = f.readlines()
            # print(fjsl)
    with open("Password.txt","r+") as f:
        content = (f.readlines())
        for i in content:
            pas = i.split(" : ")[0]
            what_for = (i.split(" : ")[1])
            what_for.replace("\n","")
            print(f"{pas} = '{what_for}'")
password_genetor()