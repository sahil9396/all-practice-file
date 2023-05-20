import numpy as np
import pandas as pd
import time
import matplotlib.pyplot as plt
import random



# zeroos = (np.arange(1,10))
# fores  = (np.arange(1,10,2))
# onee = np.array([1,2,3,4])
# twoo = np.ones((10,4),dtype=float)
# threee = np.zeros((5,10),dtype=int)
# b = np.array([[1,2] , [3,4] , [5,6]])

# what = np.arange(16).reshape(2,1,8) #the format is reshape(a,b,c) a = how many elements , b = rows value and c = coloumbs value
# hat = np.arange(8).reshape(2,2,2) 
# rnadom = np.random.random((3,5))

# (np.linspace(-20,10,10)) #format, a  = starting number , b = ending number , c = number of elements here a and b are included
# (np.identity(3))

# a1 = np.arange(10,dtype=np.int32) 
# a2 = np.arange(12).reshape(4,3)
# a3 = np.arange(12).reshape(3,2,2)

# print(a2 , a2.ndim)
# print(a2.shape)
# print(a2.size)
# print(a2.itemsize)
# print(twoo.dtype)
# print(a2.astype(dtype=int))

# print(a2**2) # array is not changed after this operation
# print(a2 == 2) # every element is compared with 5

# 0 = coloums , 1 = rows
# these below one are used for round off
# print(np.ceil(a4))
# print(np.round(a4))
# print(np.floor(a4))

#slicing is same as regular python
# print(a1[::2]) #same as regular python list
# print(a2[::2,::3]) # here format is s2[a,b] a = rows section , b = coloumbs section. Basically you have to do 1-d array 2 times for 2d array.
# print(a3[::2,::2,::4]) # here [a,b,c] a = silicing the no.of elements , b = rows section , c = coloumbs section.1-d 3 times for 3d array
 
 
#  iterating elements from the array
# for ite in a1:
#     print(ite)
# for ite in a2:
#     print(ite)
# for ite in a3:
#     print(ite)

#transpose = same as matrix (means only work for 2d) ; syntax = array_name.T
# print(a2.T)

# conversion of 3d into 1d ; syntax = array_name.ravel()
# a4  = a3.ravel()

# stacking = creating a agumented matrix from two matrix ; the order of the matrix should be same
# a5 = np.arange(12,24).reshape(4,3)
# a6 = (np.hstack((a2,a5))) # horizontal stacking = attaching the two ends horizontally ; syntax = array_name.hstack( (array_1 , array_2) ) ; h = horizontal
# a7 = (np.vstack((a2,a5))) # vertical stacking = attaching the two ends vertically ; syntax = array_name.vstack( (array_1 , array_2) ) ; v = vertical

#splitting
# ha = (np.hsplit(a2,3))
# va = np.vsplit(a2,4)


#advancing indexing : 
# a = np.arange(8).reshape(4,2)
# 1 : fancy indexing
# print(a[:,[0,2,3]]) # syntax = array_name[a,b]; a = rows , b = coloumb ; here list is used because we are taking a specific rows or coloumbs which is not possible with normal slicing

# 2 : boolen indexing
# print(a[a<10]) # here we enter a condition inside the list , and the only true one will get printed
# print(a[a%7 == 0])



#broadcasting
# rule_1 = shape of two arrays should be same
# rule_2 = if not then, extend the smaller shape array to higher one; by adding "1" in front of the smallest shape array
# rule_3 = add number to only the part which have "1", till it matches with the bigger one

# b= np.arange(8,10).reshape(1,2)
# a10 = np.arange(4).reshape(2,2)
# b= np.arange(8,16).reshape(2,2,2)
# print(a10+b)


# nummpy as mathemathical function
# def sigmoid(array):
#     return 1/(1+np.exp(-array))
# def mse(ar1,ar2):
#     return np.mean((ar1 - ar2)**2)

# a = np.array([-1,2,np.nan])
# print(a[np.isnan(a)])


prac = [
    ["Sahil" , 5],
    ["saksahi" , 6],
    ["papa" , 7],
    ["maa" , 10]
]
prc = {
    "name" : ["sahil" , "sakshi","papa" , "maa"],
    "number" : [5,6,7,8],
    "age" : [19,17,47,35]
}

prc = pd.DataFrame(prc)
# print(pd.DataFrame(prac , columns= ["name" , "number"]))

# table_of = pd.DataFrame(prc)
table_of = pd.read_csv("movies.csv")
ilp = pd.read_csv("ipl-matches.csv")
# print(ilp.shape)
# print(ilp.dtypes)
# print(ilp.index)
# print(ilp.columns) # returns the head-line of the coloumn
# print(prac.values) 
# print(ilp.head(1))
# print(ilp.sample()) #random
# print(ilp.info())
# print(ilp.describe())
# print(ilp.isnull().sum())  # shows how many are unfilled
# print(ilp.duplicated().sum())
# print(ilp.sum(axis= 0))
# print(ilp['Venue']) # to extract a single coloum of dataframe\table and its type is a series.
# print(ilp[['ID' , 'Date']]) #fancy indexing to extract mulitple coloums
# print(prc.set_index("number")) #serve as index and writing like this will make permanent chages set_index("number" , inplace = True)


# selecting rows from a dataframe
# two methods :  but iloc method can be used in loc
# 1 = iloc => sreaches using index positions,  [can be used any time , can index in numbers will always be present]
# print(table_of.iloc[[0,2]])  # slicing methods + fancy indexing
# print(table_of.iloc[0,2])  # 2d array, element extraction methods
# print(prc)
# print(prc.iloc[-2])  # only to fetch one element at a time.
# print(table_of.iloc[0 , :3])

#  2 = loc => sreaches using index labels
# prc = prc.set_index("name")  # it makes the index of prefered coloums elements
# print(prc.loc["sahil": "papa" ])  # here last one is included
# print(prc.loc[["maa","sahil", "papa"]])  # here order is according to you


# Matches which are only finals matches , and extract only season + winning team
# fetching = (ilp[ilp["MatchNumber"] == "Final"])[['Season','WinningTeam']].set_index("Season")
# print(fetching)
# print(ilp[ilp["MatchNumber"] == "Final"])
# print(ilp[ilp["SuperOver"] == "Y"]["SuperOver"].count())
# print(ilp.iloc[1])

# chenna = ilp[  (ilp["City"] == "Kolkata")  & (ilp["WinningTeam"] == "Chennai Super Kings") ].shape[0]
# print(chenna)

# print(ilp[ilp["TossWinner"]  == ilp["WinningTeam"]])
# print((ilp[ilp["TossWinner"]  == ilp["WinningTeam"]].shape[0])/(ilp.shape)[0]*100)
# print((ilp.shape)[0])



# newprc = (pd.DataFrame(prc))
# net = newprc.rename(columns= {'name':'naav' , 'number':'ank'})  # changes the name of the coloums
# print(net)


# good imdb films
# good_films = (table_of[ (table_of["imdb_rating"] > 8.0 ) & (table_of["imdb_votes"] > 10000.0) ])
# print(good_films["title_x"])
      

# actions  = (table_of[ (table_of["genres"].str.contains("Action")) & ( table_of["imdb_rating"] > 7.5 )])
# actions  = (table_of[ (table_of["genres"].str.split("|").apply(lambda x : "Action" in x)) & ( table_of["imdb_rating"] > 7.5 )])
# print( table_of["genres"])

# to add coloums in dataframe in pandas , like python dictonary => movies[name of the coloumn] = value to assign , here value assigns for every row
# table_of["country"] = "India"
# table_of["leadactor"] = (table_of["actors"].str.split("|").apply(lambda  x: x[0]))  #if any blanck space in the row or coloumn then it returns erroe


# change the datatype
# print(ilp.info())
# ilp["ID"] = ilp["ID"].astype("int32")
# print(ilp.info())
# print(ilp.iloc[0])

vk = pd.read_csv("batsman_runs_ipl.csv")
# V Kohli
