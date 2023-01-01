T = int(input())
ans = ""
for _ in range(T):
    n1,n2 = input().split()
    
    if n1 != n2:
        if n1[-1] > n2[-1]:
            print("<")
        elif n1[-1] < n2[-1]:
            print(">")
        else:
            if n1[-1] == "S":
                if len(n1) > len(n2):
                    print("<")
                else:
                    print(">")
            else:
                if len(n1) > len(n2):
                    print(">")
                else:
                    print("<")
    else:
        print("=")
