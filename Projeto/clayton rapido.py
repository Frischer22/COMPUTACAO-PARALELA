from concurrent.futures import ThreadPoolExecutor, as_completed

def taylor(param,soma):
    soma += (1/param)
    return soma

pool = ThreadPoolExecutor(4)

futures = []

parametro = 1000

soma = 0
for i in range(1,parametro+1):
    futures.append(pool.submit(taylor,i,soma))


for i in as_completed(futures):
    soma += (i.result())

print("Soma = ",soma)

