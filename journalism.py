import os
import datetime
import time
from datetime import date
import calendar


def palindrome_check(any_thin):
    any_thing = str(any_thing)
    nth = len(any_thing)
    for i in range(int(nth/2)):
        if ( any_thing[i] != any_thing[nth -i -1]):
            return 0
    return 1

def sorting_keys(dictionary):
    the_li = [ite for ite in dictionary.keys()]
    the_li.sort()
    new_dic = {ite : dictionary[ite] for ite in the_li}
    return new_dic

def vowel_remover(any_thing):
    any_thing = list(any_thing)
    vowels = ["a","e","i","o","u"]
    for ite in any_thing:
        if ite in vowels:
            any_thing.remove(ite)
    
    newt = ""
    for ite in any_thing:
        newt = newt + (ite)

    return newt

def string_remover(the_string,what_thing):
    new_one = ""
    the_lsut = list(the_string)
    the_lsit_of_whta_thing = list(what_thing)
    for i in range(len(the_lsit_of_whta_thing)):
        if the_lsit_of_whta_thing[i] in the_lsut:
            # new_one+= the_lsit_of_whta_thing[i]
            the_lsut.remove(the_lsit_of_whta_thing[i])

    for items in the_lsut:
        new_one+= items
    
    return new_one
        
def get_max_number(what_set):
    mint = 0
    for item in what_set:
        item = int(item)
        if (item) > mint:
            mint = item
    
    return mint
        
def get_min_number(what_set):
    mint = 1000
    for item in what_set:
        item = int(item)
        if (item) < mint:
            mint = item
    
    return mint

def txt_creator(file_name):
    if not os.path.exists(f"{file_name}.txt"):
        with open(f"{file_name}.txt","w") as e:
            return 0

def day_teller():
    from datetime import date
    import calendar

    the_date = date.today()
    the_day  = calendar.day_name[the_date.weekday()]
    return the_day

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

def giving_third_maximum(arr):
    lenthOfarr = len(arr)
    arr.sort()
    try:
        return arr[lenthOfarr -3]
    
    except Exception as e:
        return arr[::-lenthOfarr]

# feeling = ['Good','Bad','Ok','jealeously','angry','over-thinking']
# feeling = {1: 'feeling like one of the best day of the life',
#                2: 'sad', 3: 'tired', 4: ' Angry', 5: 'jealous',
#                6: 'Done things that were in the time-table',
#                7: 'Lazy',
#                8: 'Lied to some-one or our-self',
#                9: 'Showoff',
#                10: 'Relate everything'}


def journalism_long(lisss):
    for itm in lisss:
        print(f"{itm} for {lisss[itm]}")

    txt_creator("Journal")

    with open("Journal.txt","w") as e:
        e.write(f"{datetime.datetime.today()}\n")
        How_many_lissss = int(input("\nHow many lisss do you suffered today\t"))
        lsit_of_feelig = []
        for i in range(How_many_lissss):
            What_is_the_lisss = int(input("\nEnter the feeling number\t"))
            the_lisss = lisss[What_is_the_lisss]
            e.write(f"{the_lisss} , ")
            lsit_of_feelig.append(the_lisss)

        for items in lsit_of_feelig:
            if items == lisss[2]:
                the_soltion1 = "What advice would I give someone else exact in my same situation"
                print(f"\nYou said you are lisss 'SAD' at the end of the day\nthe suggestion in this case\t:\t'{the_soltion1}'\n")
                time.sleep(5)
            if items == lisss[5]:
                the_sol2 = "What would do if I knew I could not fail"
                print(f"\nYou said you are lisss 'jealous' at the end of the day\nthe suggestion in this case\t:\t'{the_sol2}\n'")
                time.sleep(5)
            if items == lisss[4]:
                the_slo3 = "Who do I need to forgive.  Or  . Who am I still angery at"
                print(f"\nYou said you are lisss 'ANGRY' at the end of the day\nthe suggestion in this case\t:\t'{the_slo3}'\n")
                time.sleep(5)
            if items == lisss[8]:
                the_slo4 = "Was it was that important that needed to\nWhat have changed my mind on\tWhat would be the result if you told the truth"
                print(f"\nYou said you are lisss 'Lied' at the end of the day\nthe suggestion in this case\t:\t'{the_slo4}'\n")
                time.sleep(5)
            if items == lisss[9]:
                print(f"\nYou said you are lisss '{items}' at the end of the day\nJust not needed that\t Points are going to be cut\n")
                time.sleep(5)
            if items == "Relate everything":
                print(f"\nYou said you are lisss '{items}' at the end of the day\nYou are not only one\tSome points is cutted\n")
                time.sleep(5)
            if items == lisss[6]:
                print(f"\nYou said you are lisss '{items}' at the end of the day\n")
                effic = (input("What was the efficiency\n"))
                e.write(f"\nthe effiency of the work : {effic}")
                time.sleep(5)
            if items == lisss[3]:
                print(f"\nYou said you are lisss '{items}' at the end of the day\nIf it is doing working alot then keep it up\tif it is because of time.sleep(5)ing late or waking up late then just make sure you do everything on time\n")
                time.sleep(5)
            elif items == lisss[1]:
                print(f"\nYou said you are lisss '{items}' at the end of the day\n")
                print("What happened\n")
                time.sleep(5)
            
def journal_new(lists):
    hapy = []
    not_good = []

    for itm in lists:
        print(f"{itm} for {lists[itm]}")

    txt_creator("Journal")

    with open("Journal.txt","w") as e:
        e.write(f"{datetime.datetime.today()}\n")
        How_many_lissss = int(input("\nHow many lisss do you suffered today\t"))
        for i in range(How_many_lissss):
            try:
                good_feeling = int(input("\nEnter the feeling number\tthat was good at the of the day\t"))
                the_goodfeeling = lists[good_feeling]
                hapy.append(the_goodfeeling)
            except Exception as e:
                pass


            bad_ones = int(input("\nEnter the feeling number\tthat was bad at the of the day\t"))
            the_bad_feeling = lists[bad_ones]
            not_good.append(the_bad_feeling)
        
        if len(hapy) > len(not_good):
            print(f"You are have to keep it up\n")
        else:
            print(f"If paap and punya are same then everyone see's the paap's weight\nSo don't be in the trap of this foolish world\n")

def points_adder(li):
    for ints in li:
        print(f"{ints} for {li[ints]}")

    total_points = 0
    # Feeling_count = int(input("Enter the number of the feeling that you faced\t"))
    hapy = []
    not_htah = []
    # for i in range(Feeling_count):
        # fe_list = ["happy", "not_that_much"]
        # for items in fe_list:            
        #     try:
        #         Feeling_number = (input(f"Enter the numbr of the feeling that is {items} at the end of the end\t"))
    #             if items == "happy":
    #                 hap = list(Feeling_count)
    #                 for ite in hap:
    #                     hapy.append(li[Feeling_number])
    #                     total_points +=10
    #             else:
    #                 not_htah.append(li[Feeling_number])
    #                 total_points -=10
    #         except Exception as w:
    #             pass
    
    
    file_name = "journal"
    txt_creator(file_name)
    with open(f"{file_name}.txt","a") as w:

        fe_list = ["happy", "not_that_much"]
        for items in fe_list:            
                try:
                    Feeling_number = (input(f"Enter the numbr of the feeling that is {items} at the end of the end\t"))
                    if items == fe_list[1]:
                        hap = list(Feeling_number)
                        for ite in hap:
                            numebr = int(ite)
                            w.write(f"{li[numebr]}")
                            total_points +=1
                    
                    else:
                        sam = list(Feeling_number)
                        for ite in sam:
                            numebr = int(ite)
                            w.write(f"{li[numebr]}")
                            total_points -=1
                            
                except Exception as e:
                    pass


        w.write(f"{datetime.datetime.today()}\nYou got {total_points} points at the end of the day")


    return total_points

# 1 month = 4 weeks  , 
# 1 week = number_classes
CSO  = {16-4+18+13-4:["Tuesday","Wednesday","Thursday","Friday"]} # 39
PHY_103 = {12-3+14+6:["Tuesday",'Wednesday','Friday']} #29
Human_values ={8-2+4+5:["Thursday","Friday"]} #15
P_E ={8-2+9+5:["Tuesday",'Thursday']} #20

subjecr_list = [CSO, PHY_103 ,Human_values ,P_E]
sub = ["CSO","PHY_103","Human_values","P_E"]
cores = {}
for i in range(len(sub)):
    cores[i+1] = { sub[i] : subjecr_list[i]}

def show_the_recorded_task():
    CSO_set = set()
    Human_set= set()
    P_E_set = set() 
    PHY_103_set= set()
    record_of_att = {"CSO":CSO_set,
                    "P_E":P_E_set,
                    "Human_values":Human_set,
                    "PHY_103":PHY_103_set}
    
    the_totaol = sub + [str(i) for i in range(1,40)]

    with open("Attendance.txt") as e:
        the_content = e.readlines()
        ine = [items.split("\t") for items in the_content]

        the_usefull_one = [string_remover(jam,"\n") for items in ine for jam in items if (string_remover(jam,"\n") in the_totaol)]

        i = 0
        while(i < int(len(the_usefull_one))):
            elemet = the_usefull_one[i]
            the_nxt = the_usefull_one[i + 1]
            if elemet == "CSO":
                CSO_set.add(the_nxt)
            elif elemet  == "P_E":
                P_E_set.add(the_nxt)
            elif elemet == "Human_values":
                Human_set.add(the_nxt)
            elif elemet =="PHY_103":
                PHY_103_set.add(the_nxt)
            
            i+=2


        thefinal = {items : (record_of_att[items]) for items in record_of_att if record_of_att[items] != set()}
        finaaal = {item : get_min_number(thefinal[item]) for item in thefinal}
        # print(finaaal)
        return finaaal

def attendance(course_list):
    # day_anme = str(day_teller())
    day_anme = "Monday"
    the_only_one_thing = {course_name : what_day for ite in course_list for course_name in course_list[ite] for what_day in (course_list[ite])[course_name] if day_anme in (((course_list[ite]))[course_name])[what_day] }
    """
    The above is the dict in which it shows the coures which has to be attend and no.of days to attend in this semster from april to june 16.
    """
    weak_days = [calendar.day_name[i] for i in range(1,5) ]
    the_wast = "*" * 43


    the_data_of_file = show_the_recorded_task()   #gives the days remaining from the document.
    last_list = { items : the_data_of_file[items] for items in the_data_of_file if items in the_only_one_thing} #shows only the coures that are today has to be attend.

    txt_creator("Attendance")
    if day_anme in weak_days:
        with open("Attendance.txt",'a') as e:
            the_number_of_tabs = "\t" * len(the_only_one_thing)
            e.write(f"{the_number_of_tabs}Day\t:\t{day_anme}\n\n")

            for course_name in last_list:
                total_classes = the_only_one_thing[course_name]
                Days_to_attend_for_three_months = int((the_only_one_thing[course_name])*0.8)
                classse_to_attend = last_list[course_name]
                print(f"{course_name} : Total classes {total_classes} ; required to go : {Days_to_attend_for_three_months} ; further you have to attend {classse_to_attend}")
                ask = input("Did you attended the class?\t")
                if ask == "1":
                    classse_to_attend -=1
                print(f"Now you have to attend {classse_to_attend}\n")
                e.write(f"{course_name}\t:\t{classse_to_attend}\t")
            e.write(f"\n\n\t\t\t\t\t{the_wast}\n\n")

    else:
        the_data =  show_the_recorded_task()
        for item in the_data:
            print(f"For '''{item}''' further classes to attend : {the_data[item]}")
    asked = input("Enter any thing to exit\n")        

# os.chdir("Documents")
# attendance(cores)
