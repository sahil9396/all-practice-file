import string
import random
import os
import time
from plyer import notification

def remover_of_two_items(llist):
    for ite in llist:
        if ite == '$RECYCLE.BIN':   
            llist.remove('$RECYCLE.BIN')
        if ite == "System Volume Information": 
            llist.remove("System Volume Information")
    return llist


def show_the_task(the_excerises_new):
    the_lissss = the_excerises_new

    for item in the_lissss:
        the_type = the_lissss[item]
        if type(the_type) == dict:
            for itn in the_type:
                print(f"{item} for {itn}")
        elif type(the_type) == list:
            for ien in the_type:
                print(f"{item} for {ien}")
        elif type(the_type) == str:
            print(f"{item} for {the_type}")

def show_the_task(the_excerises_new):
    the_lissss = the_excerises_new

    for item in the_lissss:
        the_type = the_lissss[item]
        if type(the_type) == dict:
            for itn in the_type:
                print(f"{item} for {itn}")
        elif type(the_type) == list:
            for ien in the_type:
                print(f"{item} for {ien}")
        elif type(the_type) == str:
            print(f"{item} for {the_type}")

def remove_last_elements_from(what_string ,sft):
    for i in range(len(sft)):
        what_string.pop()

def fucrepeater(funt):
    while(1):
        funt()

        ask_the = (input("1 to stop the game\tany key to continue playing\n"))
        if (ask_the == "1"):
            print("Thank you for playing, have a good day\n")
            break        

def Only_additiom():
    so = 0
    while(1):
        num = (input("Enter the number\n"))
        try:
            so += float(num)
        except Exception as e:
            print(so)
            break

def average_of_given_number():
    a = 0
    n = int(input("Enter how many numbers you want to take average\n"))
    for i in range(n):
        your_number = float(input("Enter the number\t"))
        a = a + your_number
    print(f"The average of given numbers {a/n}")

def Sum_of_first_N_positive_integers():
    b= 0
    s1 = int(input("Enter the number\n"))
    for i in range(s1+1):
        b+=i
    print(b)

def Power_of_2():
    a1 = int(input("Enter the number to check if it is a power of 2\n"))
    start = 1
    for i in range(a1):
        # start = start * 2
        if a1 == start:
            print(f"Yes, And it is of degree {i}")
            break
        start = start * 2
    if a1!=start:
        print("Sorry, it is not")

def Reverse_the_things():
    noms = (input("Enter the thing that you want to reverse\n"))
    print(noms[::-1])

def Pattern_A():
    i= 1
    rows = int(input("How many rows\t"))
    col = 2*rows 
    while(i<=rows):
        j = 1        
        while(j<=col):
            if j<=rows:
                if j == 1+ rows-i:
                    print("*",end="")
                else:
                    print(" ")
            else:
                g = j-rows
                if g == i:                    
                    print("*",end="")
                else:
                    print(" ")
            j+=1
        i+=1

def rockpaperscizzor():
    gaem = ["r","p","s"]    
    win, losee , tie = 0,0,0
    i = 1
    times = int(input("For how many turn do you want to play\n"))
    while(i <= times):
        a = random.choice(gaem)
        print(f"\n{gaem}\n{a}")
        playerturn = input("Enter the thing from the list\n")        
        if ( playerturn == a):
            tie+=1
        elif (playerturn == "r" and a == "s") or (playerturn == "p" and a == "r") or (playerturn == "s" and a == "p"):
            win+=1
        else:
            losee+=1
        i+=1
    if (win > losee):
        print(f"Congragulations for wining the game, by the margin of {win - losee}\n")
    elif (win < losee):
        print(f"Sorry you lose the game with the difference of {losee - win}")
    else:
        print(f"The game is draw, for {tie + 2*win}")

def kirana_receipt():
    veg = {"patatos":30,"tamotos":40,"brinjal":50,"califlower":100,"fruits":60}
    for i in veg:
        print(f"{i} per kg : {veg[i]} rupees")
    suminitially = 0
    lem = []
    while(1):
        item_ask = (input("Enter the price of the item\tor\tEnter the name of item\n"))
        try:
            suminitially += float(item_ask)
            lem.append(item_ask)
        except Exception as e:
            try:
                suminitially += veg[item_ask]  
                lem.append(veg[item_ask])   
            except Exception as t:
                print(f"Your total sum of the item prices {suminitially}")
                for i in lem:
                    print(f"The item cost : {i}")
                break

def trailing_zeros(nu):
    # nu = int(input("Enter the number to find the trailing zeros of factorial of an number\n"))
    fiveyh = 5
    count = 0
    while(nu%fiveyh == 0):
        count = count + nu/(fiveyh)
        fiveyh = fiveyh * 5
        nu = nu//5
    return count

def factorial_no_1(no):
    start = 1
    multiple = 1
    if (no ==0 or no == 1):
        return 1
    elif (no > 1):
        while(multiple <= no):
            start = start * multiple
            multiple+=1
        return start

def factorial_no_2(no):
    if (no ==0 or no == 1):
        return 1
    else:
        return (no * factorial_no_2(no - 1))
    
def intersection_of_two_arrays(a1,a2):
    # examples of this are:
    # llist = [2,3,4,5,6,6]
    # llist2 = [1,5,5,6,8]        
    i1 = i2 = 0
    lengh1 = len(a1)
    lengh2 = len(a2)
    tst = 0
    while (i1<lengh1 and i2< lengh2 ):
        if (a1[i1] == a2[i2]):
            print(a1[i1],end="")
            i1 +=1
            i2 +=1
            tst =  1
        elif (a1[i1] < a2[i2]):
            i1+=1
        else:
            i2+=1
    
    if (tst == 0):
        print(f"Sorry there is no common element\n")

def Currencyconvetor(): 
    dc = {}
    with open("currency.txt") as f:
        af = f.readlines()
        for i in af:
            first_term = (i.split("\t")[0])
            second_term = (i.split("\t")[1])
            dc[first_term] = second_term
    for items in dc:
        print(f"1 indian rupee = {dc[items]} {items}")
    indian_rp = (input(f"Enter amount in indian ruppes\n"))
    currency = (input("in which currency do you want to turn into\n"))
    print(f"{indian_rp} = {(dc[currency])} {currency}")
    
def file_cleaner():
    # print(dir(os))
    # print(f"{os.getcwd()} == which shows the current directory of the program file, cwd = current working directory")
    # (f"{os.chdir("c:\\")} = changes the directory to where you want")

    # os.chdir("c:\\")
    # print(os.getcwd())

    # print(f"{os.listdir()}\n\nshows all the files and folder in the current directory")
    # os.mkdir("this") #create a new folder in the dic
    # os.makedirs("this/that") #create a new folder in the dic along with sub-folder

    # os.rename("Arrysstarting.cpp","Arraystarting.cpp")  
    # os.rmdir() #removes the empty dir
    # os.removedirs() #removes the sub-directory from a directory
    # print(os.path.join("h:c//","Sahil.txt"))
    pass

# os.mkdir("Sahil.txt")
# os.makedirs("This/that/these")
# os.rmdir("This")

def water_notification():
    while True:
        notification.notify(
            title  = "Drink the water or else",
            message = "It is good habit",
            # app_icon = "E:\water glass",   #don't know how to write the code
            timeout = 10
        )
        time.sleep(10)

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

def pirnt_the_elements(listtt):
    file_ype = type(listtt)
    if file_ype == dict:
        for ite in listtt:
            print(f"{ite} for {listtt[ite]}")
    elif file_ype == list:
        for i in listtt:
            print(i)    

def remove_elem(lis,element):
    file_ype = type(lis)
    if file_ype == dict:
        lis.pop(element)
    elif file_ype == list:
        lis.remove(element)


def duplicate_the_list(dis,day,liss,file_name):
    li1 = liss
    for i in range(len(liss)):
        pirnt_the_elements(li1)
        ex_done = int(input("\nEnter the excerise you done from the above list\t"))
        the_workout_which_has_to_be_removed = li1[ex_done]
        remove_elem(liss,the_workout_which_has_to_be_removed)
        rips= (input(f"\nHow many rips did you done for {ex_done} for a fixed set of 3\t"))
        weights = (input(f"\nEnter the weights that you done with\t"))
        if not os.path.exists(file_name):
            with open(file_name,"w") as entery:
                pass
        with open(file_name,"r+") as entery:
            et_the_time = time.asctime()
            entery.write(f"{day} : {dis[day]} : {rips} : {weights} : {et_the_time}")
    feeling = (input("\nHow do you feel today\t"))
    with open(file_name,"r+") as entery:
        entery.write(f"{feeling}\n")
        print(entery.readline())

# The password_securor
if __name__ == "__main__":
    secure = (('s','$'),
            ('and','&'), 
            ('a','@'),
            ('o','0'),
            ('i','1'),
            ('I','|'))
    # def password_secure_my(the_passwored):
    #     the_list_of_characters = list(Inp)
    #     for i in range(len(the_list_of_characters)):
    #         for itms in secure:
    #             if the_list_of_characters[i] == itms[0]:
    #                 the_list_of_characters[i] = itms[1]
    #     print(f"the password is now secured\t:\t",end="")
    #     for ask in the_list_of_characters:
    #         print(ask,end="")
    # def password_secure_teacher_s(the_password):
    #     the_password = the_password.replace(a,b)
    #     return the_password
    # # Inp = (input("Enter the password\t"))
    # for a,b in secure:
    #     Inp = password_secure_teacher_s(Inp)
    # print(Inp)

def binod_finder_my_approach_for_E_drive(the_dir_to_change,word_that_has_to_be_find):
    os.chdir(f"{the_dir_to_change}")
    original_die = (os.getcwd())
    list_of_items_in_disc = os.listdir()
    remover_of_two_items(list_of_items_in_disc)

    for items in list_of_items_in_disc:
        if os.path.isdir(items):
            os.chdir((original_die) + f"{items}")
            list_in_folder = os.listdir()

            for ist in list_in_folder:
                # if os.path.isfile(ist):
                #     with open(f"{ist}") as w:
                #         content = (w.readlines())
                    
                #     list_of_decullet_contten = []
                #     for cont in content:
                #         new_con = cont.split(" ")
                #         list_of_decullet_contten.extend(new_con)
                    
                #     lsit_correct_content = []
                #     for tie in list_of_decullet_contten:
                #         again = tie.split("\n")
                #         lsit_correct_content.extend(again)

                #     for real in lsit_correct_content:
                #         if real.lower() == "binod":
                #             print(f"'{real}' letter is present in this file : '{ist}'")
                #             break

                if ist.endswith("txt"):
                    with open(f"{ist}") as we:
                        the_content = we.read()
                    
                    if (f"{word_that_has_to_be_find}") in the_content.lower():
                        print(f"We got {word_that_has_to_be_find} in {ist} file\n")
                    else:
                        print(f"Not found in this file\n")
                        
def binod_in_more_optimize_way(directiory_of_the_file , word_that_has_to_be_find):
    os.chdir(f"{directiory_of_the_file}")

    def isbinod(fiel_naem):
        with open(f"{fiel_naem}") as wa:
            the_content = wa.read()        

        if f"{word_that_has_to_be_find}" in the_content.lower():
            return True
        else:
            return False

    list_fo_items = os.listdir()
    for ite in list_fo_items:
        if ite.endswith("txt"):
            print(f"Trying to search {word_that_has_to_be_find} in : {ite}")
            if isbinod(ite):
                print(f"!!!!!!!!!!!!!!!!  {word_that_has_to_be_find} is this file {ite}  !!!!!!!!!!!!!!!!\n")
            else:
                print(f"sorry {word_that_has_to_be_find} is not present here\n")


def q1_of_code_mafia():

    n = int(input("Enter the rows number\t"))
    m = int(input("Enter the coloumbs number\t"))
    z = 0


    the_big = []
    for i in range(1,1+n):
        insised = []
        for j in range(1,1+m):
            insised.append(0)
        the_big.append(insised)

    se_of_operations = [[2,4]]
    for items in (se_of_operations):
        if (items)[0] > n:
            (items)[0] = n+1
        if (items)[1] > m:
            (items)[1] = m+1
        for k in range((items)[0] -1):
            for j in range((items)[1]-1):
                (the_big[k])[j] += 1
    
    for items in the_big:
        print(items)

    for i in range(n):
        for j in range(m):
            if (the_big[i])[j] != 0:
                z+=1
    print(f"\nThe total number of integers present in this matrix after the operations is : {z}")


def give_day_name():
    from datetime import date
    import calendar

    the_day_number = date.today()
    return (calendar.day_name[the_day_number])

def my_first_astronomic_number(number):
    
    num1 = list(number)
    sum = 0
    order = len(num1)
    # print(num1)
    for ite in num1:
        sum = sum + (int(ite) ** order)

    if (number) == str(sum):
        print(f"It is an astronomical number with order : {order}\n")
    else:
        print(f"It is not an astronomical number\n")

# not needed 
# def order_giving(nume):
#     sum =0
#     while(nume != 0):
#         nume = nume//10
#         sum +=1
#     return sum

def my_second_approach_for_astro_number(numb):
    n1 = n2 = int(numb)
    # od = order_giving(n1)
    od  = len(str(n1))
    sum1 = 0
    for i in range(od):
        the_single_digit = n1%10
        n1 = n1//10
        sum1 += (the_single_digit ** od)

    if (n2) == sum1:
        print(f"The number is astronomical number\n")
    else:
        print("It is not\n")
    
# numeric = int(input("enter the number\t"))
# my_second_approach_for_astro_number(numeric)


def LCM_my_method(number_1 , number_2):
    maxi = max(number_1 , number_2)
    mini = min(number_1 , number_2)
    n = [maxi * i for i in range(1, maxi +1) if (maxi * i)%mini == 0][0]
    return n

def LCM_sir(number_1 , number_2):
    maxi = max(number_1 , number_2)
    while True:
        if (maxi%number_1 == 0 and maxi%number_2 == 0):
            break
        maxi+=1
    
    print(f"The LCM of the numbers : {maxi}")

def x_plus_y_problem(a):
    for ite in range(len(a) -1 ):
        if a[ite] == "1":
            a[ite] ="0"
            if a[ite + 1 ] == "1":
                a[ite + 1 ] == "0"
            else:
                a[ite + 1 ] == "1"
        else:
            a[ite] = "1"

    return a

# a = input("enter teh number in 0 and 1\t")
# a = "1101101010"
# a = list(a)
# print(a)
# scam = a.copy()
# while ( a != x_plus_y_problem(a.copy())):
#     a = x_plus_y_problem(a.copy())
# print("there is more than this")
# for ite in range(len(a) -1 ):
#         if a[ite] == "1":
#             a[ite] ="0"
#             if a[ite + 1 ] == "1":
#                 a[ite + 1 ] == "0"
#             else:
#                 a[ite + 1 ] == "1"
#         else:
#             a[ite] = "1"
# print(a)


def HCF(number_1 ,number_2 ):
    maxi = max(number_1 , number_2)
    mini = min(number_1 , number_2)

    lsit = [i for i in range(1,mini) if( maxi%i == 0 & mini%i == 0)][::-1]
    print(lsit)


password_genetor()