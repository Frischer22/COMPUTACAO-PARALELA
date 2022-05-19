#from concurrent.futures import ProcessPoolExecutor, as_completed
from concurrent.futures import ThreadPoolExecutor, as_completed

num_threads = 4
pool = ProcessPoolExecutor(num_threads)

def taylor(param,soma):
    soma += (1/param)
    return soma


futures = []

parametro = 1000

soma = 0
for i in range(1,parametro+1):
    futures.append(pool.submit(taylor,i,soma))


for i in as_completed(futures):
    soma += (i.result())

print("Soma = ",soma)
