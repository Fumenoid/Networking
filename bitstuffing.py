def stuffing():
    frame=list(input("Enter the data of frame to stuff\n"))
    final=[]
    count=0
    for i in range(len(frame)):
        if(frame[i]=='1'):
            final.append(frame[i])
            count+=1
            if(count==5):
                final.append('0')
                count=0
        else:
            final.append(frame[i])
            count=0
    strl=''.join(final)
    print("\nAfter Bit Stuffing")
    print(strl)

def destuffing():
    frame=list(input("Enter the data of frame to destuff\n"))
    final=[]
    count=0
    for i in range(len(frame)):
        if(count==5):
            count=0
            continue
        elif(frame[i]=='1'):
            final.append(frame[i])
            count+=1
        else:
            final.append(frame[i])
            count=0
    strl=''.join(final)
    print("\nAfter Bit Destuffing")
    print(strl)

while True:
    n=input("\n\nEnter 1 to Stuff bits in data\nEnter 2 to Destuff bits in data\nEnter 0 to quit\n")
    if(n=='1'):
        stuffing()
    elif (n=='2'):
        destuffing()
    elif (n=='0'):
        break
    else:
        print("Invalid option")



