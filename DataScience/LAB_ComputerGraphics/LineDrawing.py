## first we will take two coordinates p1 and p2

x1,y1 = map(int,input("Enter x1 y1: ").split(' ',2))
print("{} {}".format(x1,y1))

x2,y2 = map(int,input("Enter x2 y2: ").split(' ',2))
print("{} {}".format(x2,y2))

dy = y2-y1
dx = x2-x1
m = dy/dx

for i in range(1,11):
    for j in range(1,11):
        y = m*j
        x = j
        if(i==x and j==y and x<=x2):
            print("*",end = '')
        else:
            print(".",end = '')
    print()    

##y = mx

