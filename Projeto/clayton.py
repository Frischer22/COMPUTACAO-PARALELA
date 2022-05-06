import threading

totalsum = 0

def taylor(target):
    soma = totalsum + (1/int(target))
    return soma

param = int(input("Insira um valor para calcular sua serie de taylor: "))
for i in range(1,param+1):
    totalsum = taylor(i)
print(totalsum)

soma_thread = threading.Thread(target = taylor, args=(i,))
soma_thread.start()
