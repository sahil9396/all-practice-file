import pygame as pg
import random
pg.init() #it initializes the models to use.


# to display a window
screen_lenth = 700
screen_width = 500
gamewindow = pg.display.set_mode( (screen_lenth,screen_width) )

# colors
white = (255,255,255)
red = (255,0,0)
black = (0,0,0)

# setting the game name
pg.display.set_caption("First game")
clock = pg.time.Clock()
font = pg.font.SysFont(None , 55)

# to keep the window open
game_ext = False
game_over = False
fodd_x = random.randint(30  ,screen_width/2)
fodd_y = random.randint(30  ,screen_lenth/2)
snake_x = 90  # x co-ordinate position from the top left corner of game-display
snake_y = 90 # y co-ordinate position from the top left corner of game-display
snake_size = 10 #dimension of the snake
snake_size_y = 10 #dimension of the snake
fps = 35 # frames per second
move_x = 0
move_y = 0
score  = 0

# pg.draw.rect(gamewindow , black , [fodd_x , fodd_y , snake_size , snake_size])

init_velocity = 10


def text_screen(text , color , x, y):
    screen_txt = font.render(text , True , color)
    gamewindow.blit(screen_txt ,[x,y] )


def plot_snake( gamewindow , color , snk_list , snk_size):
    for x,y in snk_list:
        pg.draw.rect(gamewindow , color , [x , y , snake_size , snake_size_y])
        

snk_list = []
snk_size = 1

while not game_ext:  # one loop is one frame
    for event in pg.event.get():
        
        if event.type == pg.QUIT:
            game_ext = True

        elif event.type == pg.KEYDOWN: #keydown is to know wheather the key is pressed or not
            if event.key == pg.K_RIGHT:  #k_right is to know wheather the key is right
                # print("right is pressed")
                move_x =init_velocity
                move_y = 0
            elif event.key == pg.K_DOWN:
                move_y =init_velocity
                move_x = 0
            elif event.key == pg.K_UP:
                move_x = 0
                move_y =-init_velocity
            else:
                move_y = 0
                move_x=-init_velocity
    
    snake_x +=move_x
    snake_y +=move_y

    if abs(snake_x - fodd_x < 4) and abs(snake_y- fodd_y < 4):
        score+=1
        fodd_x = random.randint(30  ,screen_width/2)
        fodd_y = random.randint(30  ,screen_lenth/2)
        snake_size_y+=10
        snk_size+=4
        # snake_size+=10

    if (snake_x >= screen_lenth or snake_x < 0) or (snake_y >= screen_width or snake_y < 0): game_ext = True

    gamewindow.fill(white)
    text_screen("score :"+ str(score) , red , 300,0)
    pg.draw.rect(gamewindow , black , [fodd_x , fodd_y , snake_size , snake_size])

    # the position of the snake ( the_window  , color , [x_co-ordinate , y_co-ordinate , dimension-x , dimension-y])
    head = []
    head.append(snake_x)
    head.append(snake_y)
    snk_list.append(head)
    if len(snk_list)>snk_size:
        del snk_list[0]

    plot_snake(gamewindow , red , snk_list , snk_size)
    # pg.draw.rect(gamewindow , red , [snake_x , snake_y , snake_size , snake_size_y])
    pg.display.update()
    clock.tick(fps)
    