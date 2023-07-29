from turtle import Turtle,Screen

t = Turtle()
screen = Screen()
t.shape('turtle')
t.speed(0)
s=1;

for i in range(100):

    s=s+(i/5)
    t.forward(s)
    t.right(90)

    s=s+(i/5)
    t.forward(s)
    t.right(90)

    s=s+(i/5)
    t.forward(s)
    t.right(90)

    s=s+(i/5)
    t.forward(s)
    t.right(90)





screen.exitonclick()
