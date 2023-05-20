import os
import datetime

def give_day_name():
    from datetime import date
    import calendar

    the_day_number = date.today()
    return (calendar.day_name[the_day_number.weekday()])


def file_creator(file_name):
    if not os.path.exists(f"{file_name}.txt"):
        with open(f"{file_name}.txt","w") as e:
            pass

back_workout = {1:"One-Arm dumbell Row",
                    2:"Bend over barbell row",
                    3:"Lat pull-down",
                    4:"Mid-row",
                    5:"Deadlift",
                    6:"One arm cable rear lateral",
                    7:"above with dumbells with both hands"}

Legs_workout ={1: 'Leg extension with machine',
               2: 'Leg press with machine',
               3: 'leg curl [sleep on table then pull with legs] with machine',
               4: 'squats with weights with machine / pistol',
               5: 'lunges',
               6: 'calfs'}

shoulders_and_triceps = {1:"Front military press",
                         2:"Side lateral  + front raises by sitting",
                         3:"side cable pull press",
                         4:"dumbel shrugs for traps",
                         5:"Tricep push-down",
                         6:"One Arm dumbbell overhead extension",
                         7:"Lying triceps extension [taking rod behind the head]"}

Chest_and_biceps = {}

the_blank_list = {1:{"Back_workout":back_workout},
                     3:{"Legs_workout":Legs_workout},
                     5:{"Shoulders_and_triceps":shoulders_and_triceps},
                     6:{"Chest_and_biceps":Chest_and_biceps},
                     7:["Extra day"],
                     0:["Not gone"]}

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

def add_extra_dayss():
    with open("Excerised_data_entery.txt","a") as f:
        while(True):
                what_ex =  (input("Enter the excerise name\t"))
                reps = (input("How many reps\t"))
                weights = (input("Enter the weight you done\t"))
                f.write(f"the excerise : '{what_ex}'\nreps:{reps}\t\tweights:{weights}\n")

                more_exc = (input("\nDid you done anything more\t"))
                if more_exc == "yes":
                    pass
                else:
                    print("\n\nHave a Good Rest time\n")
                    break
        f.write("\n**********************************************\n\n")

def more_optimzed_data_entery_only(th_list,file_name):

    show_the_task(th_list)

    what_the_day = int(input("\nEnter the number of the day\tOR\tAny other number to exit\t"))
    # the_excerise = (input("Enter the excerise that you done\t"))

    file_creator(file_name)
    with open(f"{file_name}.txt" , 'a') as e:
        e.write(f"Day of entery\t:\t{give_day_name()}\t|\ttime\t:\t{datetime.datetime.today()}\n\n")
        if what_the_day == 0:
            reason = input("Enter the reason why not gone for workout\t")
            e.write(f"The reason for not working_out\t\t:\t\t{reason}\n")
        elif what_the_day == 7:
            add_extra_dayss()
        else:
            try:
                dire_of_workout = th_list[what_the_day]
                for isthis in dire_of_workout:
                    dire_of_workout = dire_of_workout[isthis]
                show_the_task(dire_of_workout)

                for itis in dire_of_workout:
                        reps = (input(f"\nEnter the number of reps you did for {dire_of_workout[itis]}\t"))
                        weights = (input(f"Enter the weight you perfomed with for {dire_of_workout[itis]}\t"))
                        e.write(f"Excerise:\t'{dire_of_workout[itis]}'\nReps\t:\t{reps}\nweight\t:\t{weights}\n\n")
                        
            except Exception as wan:
                pass
    
        e.write("\t\t\t**********************************************\n\n")


# def write_the_record_on_decided_days(the_ultimate_list):
#     the_excerises_new = the_ultimate_list
#     for showing_the_day in the_excerises_new:
#         for idiot in the_excerises_new[showing_the_day]:
#             print(f"Enter {showing_the_day} for {idiot}")

#     what_the_day = int(input("\nEnter the number for the day you want to excerise\tAny other number to exit\t"))

#     file_creator("Excerised_data_entery")

#     if what_the_day == 6:
#         teh_day = (input("Enter the day when you not gone for workout\t"))
#         reason = (input(f"Enter the reason for not going\t"))
#         with open("Excerised_data_entery.txt",'a') as ed:
#             ed.write(f"Day:{teh_day}\t\t{datetime.datetime.today()}\n{reason}")
#             ed.write("\n\n''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n\n")
#         print("Entered successfully\n")

#     else:
#         try:
#             tee_day = the_excerises_new[what_the_day]   #this is the day of the work and list of the all excerises

#             for i in tee_day:
#                 print(f"\nThe day for excerise is '{i}'\n") #shows the day only,  i = day
#                 the_workout_list = tee_day[i]    
#                 day = i
#                 for ist in the_workout_list:
#                     print(f"{ist} : {the_workout_list[ist]}")

#             with open("Excerised_data_entery.txt","a")as f:
#                 f.write(f"Day : {day}\n\n")
#                 while(the_workout_list != {}):
#                     which_excerise = int(input("Enter the number of the excerise that you went today\t "))
#                     the_excer = the_workout_list[which_excerise]
#                     reps = (input("Enter the reps that you performed\t"))
#                     weights = (input("Enter the weight you done\t"))
#                     f.write(f"the excerise : '{the_excer}'\nreps:{reps}\t\tweights:{weights}\t{time.asctime()}\n\n")            
#                     the_workout_list.pop(which_excerise)
#                     print("Enterd successfully\n")
#                 f.write("\n\n''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n\n")
    
#         except Exception as e:
#             add_extra_dayss()
#             print(f"Done\n")


file = "Excerised_data_entery"
more_optimzed_data_entery_only(the_blank_list,file)
