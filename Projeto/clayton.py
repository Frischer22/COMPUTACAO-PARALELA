param = int(input("Insira um valor para calcular sua serie de taylor: "))
soma = 1
for i in range(2,param+1):
  soma = soma + (1/i)

print(soma)
