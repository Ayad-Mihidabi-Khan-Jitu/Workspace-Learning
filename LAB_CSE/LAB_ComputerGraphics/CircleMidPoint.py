import matplotlib.pyplot as plt
#import CartesianWindow as window
import CartesianWindowP as window

window.CWindow(10,20)

def CircleMidPoint(r):
    
    xcoordinate = []
    ycoordinate = []

    d = 1 - r
    print(d)

    x=0
    y=r

    while(x<=y):
        xcoordinate.append(x)
        ycoordinate.append(y)

        if(d<0):
            d=d+2*x+3;  
        else:
            d=d+2*(x-y)+5; 
            y=y-1

        x=x+1

    negxcoordinate = [ -x for x in xcoordinate]
    negycoordinate = [ -y for y in ycoordinate]

    #Iterations:

    plt.scatter(xcoordinate,ycoordinate)
    plt.scatter(ycoordinate,xcoordinate)
    plt.scatter(negycoordinate,xcoordinate)
    plt.scatter(negxcoordinate,ycoordinate)
    plt.scatter(negxcoordinate,negycoordinate)
    plt.scatter(negycoordinate,negxcoordinate)
    plt.scatter(ycoordinate,negxcoordinate)
    plt.scatter(xcoordinate,negycoordinate)

    #plt.scatter(x, y, marker='s')
    plt.show()


def main():

    r = int(input("Enter the radius of the circle: "))
    print("{}".format(r))

    CircleMidPoint(r)

main()

        
