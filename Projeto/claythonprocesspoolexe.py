from concurrent.futures import ProcessPoolExecutor, as_completed
#from concurrent.futures import ThreadPoolExecutor, as_completed

soma = 0.0

def taylor(param,IdThread):
    print(IdThread)
    soma = (1/param)
    return soma

if __name__ == '__main__':
    
    futures = []
    with ProcessPoolExecutor(max_workers=4) as pool:
        for i in range(1,100+1):
            futures.append(pool.submit(taylor,i,max_workers))
    for i in futures:
        soma += i.result()

    print("Soma = ",soma)
