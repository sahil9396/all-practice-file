import os
import datetime
from datetime import date
import calendar

def return_the_i():
    todays = calendar.day_name[date.today().weekday()]
    for i in range(1,7):
        if calendar.day_name[i] == todays:
            return i

def give_day_name():
    the_day_number = date.today()
    return (calendar.day_name[the_day_number.weekday()])

def file_creator(file_name):
    if not os.path.exists(f"{file_name}.txt"):
        with open(f"{file_name}.txt","w") as e:
            pass

back_workout = {1:"Mid-row upper",
                2:"Lat pull-down",
                3:"Mid-row lower",
                4:"Asutralian pull-ups",
                5:"One-Arm dumbell Row",
                6:"Deadlift",
                7:"Abdomenal crushes machine",
                8:"Leg_raises or hanging leg-raises",
                9:"Russian twist or sleep and swing your legs left and right"}

Legs_workoutand_butt ={1: 'Leg extension with machine',
               2: 'Leg press with machine',
               3: 'leg curl',
               4: 'squats with weights with machine / pistol',
               5: 'lunges',
               6: 'calfs'}

shoulders_and_triceps = {1:"One Arm dumbbell overhead extension",
                         2:"Tricep push-down",
                         3:"Side lateral",
                         4:"Rear  dealts",
                         5:"Front military press",
                         6:"dumbel shrugs for traps",
                         7:"Dips"}

Chest_and_biceps = {1:"15 degree inclin dumbbell press",
                    2:"Biceps curls inwards",
                    3:"Biceps curls outward",
                    4:"Bench press",
                    5:"seated cabel flyes",
                    6:"Chest press",
                    7:"Incline bench press",
                    8:"Push-ups",
                    9:"Hammer"}

the_blank_list = {1:{"Shoulders_and_triceps":shoulders_and_triceps},
                  2:{"Chest_and_biceps":Chest_and_biceps},
                  3:{"Legs_workoutand_butt":Legs_workoutand_butt},
                  4:{"Back_workout":back_workout},
                  5:{"Chest_and_biceps":Chest_and_biceps},
                  7:["Extra day"],
                  0:["Not gone"]}


def next_attendance():
    the_dic = the_blank_list[return_the_i()+1]
    with open("Next_excerise.txt","w") as f:
        for item in the_dic:
            dics = the_dic[item]
            for itea in dics.values():
                f.write(f"{itea}\n")

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
        f.write(f"Day of entery\t:\t{give_day_name()}\t|\ttime\t:\t{datetime.datetime.today()}\n\n")
        while(True):
                what_ex =  (input("Excerise:\t"))
                reps = (input("Reps\t:\t"))
                weights = (input("Weight\t:\t"))
                f.write(f"the excerise : '{what_ex}'\nreps:{reps}\t\tweights:{weights}\n\n")

                more_exc = (input("\nDid you done anything more\t"))
                if more_exc == "yes":
                    pass
                else:
                    print("\n\nHave a Good Rest time\n")
                    break
        f.write("\n\t\t\t**********************************************\n\n")

    

def more_optimzed_data_entery_only(th_list,file_name):

    show_the_task(th_list)

    what_the_day = int(input("\nEnter the number of the part\tOR\tAny other number to exit\t"))

    file_creator(file_name)
    if what_the_day == 7:
            add_extra_dayss()
    elif what_the_day in th_list:
        with open(f"{file_name}.txt" , 'a') as e:
            e.write(f"Day of entery\t:\t{give_day_name()}\t|\ttime\t:\t{datetime.datetime.today()}\n\n")
            if what_the_day == 0:
                reason = input("Enter the reason why not gone for workout\t")
                e.write(f"The reason for not working_out\t\t:\t\t{reason}\n\n")
            else:
                dire_of_workout = th_list[what_the_day]
                for isthis in dire_of_workout:
                    dire_of_workout = dire_of_workout[isthis]
                # show_the_task(dire_of_workout)

                for itis in dire_of_workout:
                    print(f"\nExcerise:\t{dire_of_workout[itis]}")
                    reps = (input(f"Reps\t:\t"))
                    weights = (input(f"Weight\t:\t"))
                    e.write(f"Excerise:\t'{dire_of_workout[itis]}'\nReps\t:\t{reps}\nweight\t:\t{weights}\n\n")
        
            e.write("\t\t\t**********************************************\n\n")

    if return_the_i()+1 in the_blank_list:
        print("Your nxt excerise file is on process")
        next_attendance()
        print("It is completed")

os.chdir("D:\My Drive\gym")
file = "Excerised_data_entery"
more_optimzed_data_entery_only(the_blank_list,file)
ask = input("Enter any key to exit")