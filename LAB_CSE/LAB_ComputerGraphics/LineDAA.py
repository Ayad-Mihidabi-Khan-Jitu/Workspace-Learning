import matplotlib.pyplot as plt
#import CartesianWindow as window
import CartesianWindowP as window

window.CWindow(10,20)

def LINEDDA(sp,ep):
    
    xcoordinate = []
    ycoordinate = []

    x0,y0=sp
    xe,ye=ep

    dy = ye-y0
    dx = xe-x0
    m = dy/dx
    print(m)
    x=x0
    y=y0

    xcoordinate.append(x)
    ycoordinate.append(y)

    if(abs(m)<=1):
        while(x!=xe):
            x=x+1
            y=y+m
            xcoordinate.append(x)
            ycoordinate.append(y)
    else:
        while(y!=ye):
            x=x+(1/m)
            y=y+1
            xcoordinate.append(x)
            ycoordinate.append(y)
    
    #Iterations:

    plt.scatter(xcoordinate,ycoordinate)
    #plt.scatter(x, y)
    plt.show()


def main():

    x0,y0 = map(int,input("Enter x0 y0: ").split(' ',2))
    print("{} {}".format(x0,y0))

    xe,ye = map(int,input("Enter xe ye: ").split(' ',2))
    print("{} {}".format(xe,ye))

    sp=x0,y0
    ep=xe,ye

    LINEDDA(sp,ep)

main()

        
