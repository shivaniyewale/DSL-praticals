U=[]
A=[]
B=[]
C=[]
 
n=int(input("Enter the strentgh of student="))
for i in range(1,n+1):
    U.append(i)
    
a=int(input("Enter the no of student who like cricket="))
for i in range(a):
    A.append(int(input("Enter the roll no=")))
    
b=int(input("Enter the no of student who like badmition="))
for i in range(b):
    B.append(int(input("Enter the roll no=")))
    
c=int(input("Enter the no of student who like football="))
for i in range(c):
    C.append(int(input("Enter the roll no=")))

print("cricket student= ",A)
print("Badmition student=",B)
print("football student=",C)


#both cricket and badmition


R1=[]

def result1(A,B):
    for i in range(a):
        for j in range(b):
            if A[i]==B[j]:
                R1.append(A[i])
    print("Play both A And B=",R1)
    return R1
result1(A,B)
    
#either cricket or badmition not both


T1=[]
for i in range(a):
    T1.append(A[i])
    
for i in range(b):
    flag=0
    for j in range(a):
        if B[i]==A[i]:
            flag==1
            break
    if flag==0:
        T1.append(B[i])

T2=[]
def result2(T1,R1):
    for i in range(len(T1)):
        flag=0
        for j in range(len(R1)):
            if T1[i]==R1[j]:
                flag=1 
                break
            
            if flag==0:
               T2.append(T1[i])
            
    print("Who play either cricket or batmisiton not both",T2)
    return T2
result2(T1,R1)
            

    #neither cricket nor badmition
    
T3=[]
def result3(U,T1):
    for i in range(n):
        flag=0
        for j in range(len(T1)):
            if U[i]==T1[j]:
                flag=1
                break
        if flag==0:
           T3.append(U[i])
    print("Who play neither cricket no badmition=",T3)
    return T3
result3(U,T1)

#who play criket and football not badmition

T4=[]
for i in range(a):
    A.append(A[i])
    
for j in range(c):
    flag=0
    for j in range(a):
        if C[i]==A[j]:
            flag=1
            break
        if flag==0:
            T4.append(C[i])
            
T5=[]
def result4(T4,B):
    for i in range(len(T4)):
        flag=0
        for j in range(b):
            if T4[i]==B[j]:
                flag=1
                break
    if flag==0:
      T5.append(T4[i])
    print("Who play cricket and football not badmition",T5)
    return T5
result4(T4,B) 