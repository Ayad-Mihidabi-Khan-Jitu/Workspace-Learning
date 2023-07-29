import matplotlib.pyplot as plt
#import CartesianWindow as window
import CartesianWindowP as window

window.CWindow(10,20)

def EllipseMidPoint(a,b):
    
    xcoordinate = []
    ycoordinate = []

    x=0
    y=b
    aa = a*a
    bb = b*b
    aa2 = aa*2
    bb2 = bb*2
    fx=0 #ini partial derivative
    fy=aa2*b #ini partial derivative
    p = bb - aa*b + 0.25*aa # initial decision parameter

    print(p)

    ##set-1 decision parameter p
    while(fx<fy): #|m|<1
        xcoordinate.append(x)
        ycoordinate.append(y)
        x=x+1
        fx=fx+bb2
        if(p<0):
            p=p+fx+bb
        else:
            y=y-1
            fy = fy - aa2
            p=p+fx+bb-fy

    #set pixel at(xk,yk)
    xcoordinate.append(x)
    ycoordinate.append(y)

    ##set-2 decision parameter q
    q=bb*(x+0.5)*(x+0.5) + aa*(y-1)*(y-1) - aa*bb
    
    while (y>0):
        y=y-1
        fy = fy - aa2
        if(q>=0):
            p=p-fy+aa
        else:
            x=x+1
            fx=fx+bb2
            p=p+fx-fy+aa

        xcoordinate.append(x)
        ycoordinate.append(y)


            

    negxcoordinate = [ -x for x in xcoordinate]
    negycoordinate = [ -y for y in ycoordinate]

    #Iterations:

    plt.scatter(xcoordinate,ycoordinate)
    #plt.scatter(ycoordinate,xcoordinate)
    # plt.scatter(negycoordinate,xcoordinate)
    plt.scatter(negxcoordinate,ycoordinate)
    plt.scatter(negxcoordinate,negycoordinate)
    # plt.scatter(negycoordinate,negxcoordinate)
    # plt.scatter(ycoordinate,negxcoordinate)
    plt.scatter(xcoordinate,negycoordinate)

    #plt.scatter(x, y, marker='s')
    plt.show()


def main():

    a,b = map(int,input("Enter a b (where a>=b): ").split(' ',2))
    print("{} {}".format(a,b))

    EllipseMidPoint(a,b)

main()

        
