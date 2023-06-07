from pyamaze import maze
import time
m = maze(3,3)
m.CreateMaze()
n  = m.maze_map
# print(n)
m.run()
# for item in n:
#       ls = n[item]


# class Pri_que:

#     def __init__(self):
#         self.qu = []

#     def add_and_pri(self , d):
#         self.qu.append(d)
#         self.qu.sort()

#     def pop_back(self ):
#         n = len(self.qu)
#         try:
#             del self.qu[n-1]
#         except Exception as e:
#             print("Queue is empty")
        
#     def pop_front(self):
#         try:
#             del self.qu[0]
#         except Exception as e:
#             print("Queue is empty")

#     def tOP(self):
#         if (len(self.qu)):
#             return self.qu[0]
#         else:
#             print("Queue is empty")
    
g = {}
f = {}
goal=1,1
# start =list((m.rows , m.cols))


def to_go_next_node(curr ,goal ,cost):
      curr = list(curr)
      path = {}
      # one for upper
      left = curr.copy()
      right = curr.copy()
      if(left[0] != 0):
            left[0] = left[0]-1
            h = heu(left , goal)
            g= cost +1
            f = g+h
            if(f > cost + heu(curr , goal)):
                  return False
            else:
                  path[left] = f

      # lower
      elif(right[0] != 0):
            right[0] = right[0]-1
            h = heu(right , goal)
            g= cost +1
            f = g+h
            if(f > right + heu(curr , goal)):
                  return False
            else:
                  path[right] = f
      # left

      # right
      pass

def heu( cur, goals ):
    goal = list(goals)
    s = time.time()
    c = 0
    while True:
          if(goal[0]  == cur[0]):
                break
          c+=1
          goal[0]+=1

    while True:
          if(goal[1] == cur[1]):
                break
          goal[1]+=1
      
    t = s - time.time()
    print(t)

    c+=1
    return c

# while (start is not gaol):
# print(start == list(goal))

# to_check_walls_for_current_node([2,3] , goal)
# print(m._goal)
def h2(strt , goal):
      s = time.time()
      x1,y1 = strt
      x2,y2 = goal
      t = s - time.time()
      print(t)
      return abs(x1-x2) + abs(y1-y2)

# h2((3,3) , goal)
# heu((3,3) , goal)