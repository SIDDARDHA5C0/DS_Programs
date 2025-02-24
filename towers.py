
ans=0
def towers(n,sour,des,aux):
    global ans
    if n==1:
        print(f"Moving disk 1 from {sour} to {des} ")
        ans=ans+1
        print(ans)
        return
    towers(n-1,sour,aux,des)
    print(f"Moving disk {n} from {sour} to {des} ")
    ans=ans+1
    print(ans)
    towers(n-1,aux,des,sour)

n=int(input('Enter no.of disks: '))
towers(n,'A','B','C')

