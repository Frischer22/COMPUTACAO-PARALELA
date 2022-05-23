from multiprocessing import Pool, cpu_count
from functools import reduce


def taylor(param):
    return (1/param)

if __name__ == "__main__":
    
    with Pool() as pool:
        r = range(1,1000000+1)
        result = pool.map(taylor,r)
    total = reduce(lambda x, y: x + y, result)
    print("Soma = %s" % total)
