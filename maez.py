from pyamaze import maze,agent,COLOR,textLabel
from queue import PriorityQueue
def h(start, goals):
    goal = list(goals)
    c = 0
    while True:
          if(goal[0]  == start[0]):
                break
          c+=1
          goal[0]+=1

    while True:
          if(goal[1] == start[1]):
                break
          goal[1]+=1
          c+=1
    
    return c
    
def A_star(m , start):
    if start is None:
        start=(m.rows,m.cols)
    open = PriorityQueue()
    open.put((h(start, m._goal), h(start, m._goal), start))
    aPath = {}
    g = {row: float("inf") for row in m.grid}
    g[start] = 0

    f = {row: float("inf") for row in m.grid}
    f[start] = h(start, m._goal)
    
    searchPath=[start]
    
    while not open.empty():
        cur = open.get()[2]
        searchPath.append(cur)
        if cur == m._goal:
            break        
        for d in 'ESNW':
            if m.maze_map[cur][d]==True:
                if d=='E':
                    nxt=(cur[0],cur[1]+1)
                elif d=='W':
                    nxt=(cur[0],cur[1]-1)
                elif d=='N':
                    nxt=(cur[0]-1,cur[1])
                elif d=='S':
                    nxt=(cur[0]+1,cur[1])

                temp_g_score = g[cur] + 1
                temp_f_score = temp_g_score + h(nxt, m._goal)

                if temp_f_score < f[nxt]:   
                    aPath[nxt] = cur
                    g[nxt] = temp_g_score
                    f[nxt] = temp_g_score + h(nxt, m._goal)
                    open.put((f[nxt], h(nxt, m._goal), nxt))


    fwdPath={}
    cell=m._goal
    while cell!=start:
        fwdPath[aPath[cell]]=cell
        cell=aPath[cell]
    return searchPath,aPath,fwdPath

if __name__=='__main__':
    m=maze(5,5)
    m.CreateMaze()

    searchPath,aPath,fwdPath=A_star(m , None)
    a=agent(m,footprints=True,color=COLOR.blue,filled=True)
    b=agent(m,1,1,footprints=True,color=COLOR.green,filled=True,goal=(m.rows,m.cols))
    c=agent(m,footprints=True,color=COLOR.dark)

    m.tracePath({a:searchPath},delay=300)
    m.tracePath({b:aPath},delay=300)
    m.tracePath({c:fwdPath},delay=300)

    m.run()