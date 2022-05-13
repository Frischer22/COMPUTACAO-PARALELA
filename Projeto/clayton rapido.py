from concurrent.futures import ThreadPoolExecutor, as_completed
import asyncio

num_threads = 4
pool = ThreadPoolExecutor(num_threads)
sema = asyncio.Semaphore(num_threads)

def taylor(param,soma):
    soma += (1/param)
    return soma


futures = []

parametro = 1000

soma = 0
for i in range(1,parametro+1):
    futures.append(pool.submit(taylor, sema,i,soma))


for i in as_completed(futures):
    async with sema:
        soma += (i.result())

print("Soma = ",soma)
