from multiprocessing import Pool, cpu_count
#from multiprocess import Pool, cpu_count

from functools import reduce


def taylor(param):
    return (1/param)

if __name__ == "__main__":
    num_cores = cpu_count()
    print("Num de processadores: ",num_cores)
    with Pool(num_cores) as pool:
        r = range(1,10000000+1)
        result = pool.map(taylor,r)
    total = reduce(lambda x, y: x + y, result)
    print("Soma = %s" % total)
