import glob
import argparse
import re
import numpy as np

import matplotlib.pyplot as plt

def process_result(folder_path):
    x = []
    y = []

    for file_path in glob.glob(folder_path + '/*'):
        n_core = int(re.findall(r'n_core-[\d]+', file_path)[0][7:])
        x.append(n_core)

        with open(file_path, 'r') as file:
            lines = file.readlines()
            results = re.findall(r'[\d\.?\d*]+', lines[-2])

            if len(results) < 1:
                continue

            cpu_time = float(results[1])
            y.append(cpu_time)

    plt.plot(x, y)
    plt.title(folder_path)
    plt.xlabel('N Cores')
    plt.ylabel('CPU Time (s)')


if __name__ == '__main__':
    # parser = argparse.ArgumentParser()http://stackoverflow.com/questions/1117134/padding-zeros-in-a-string
    # parser.add_argument('-i', '--input')
    # args = parser.parse_args()

    result_dirs = [
        'NAMD_2.9_Linux-x86_64-multicore',
        'NAMD_2.9_Linux-x86_64-multicore-CUDA'
        # 'NAMD_2.9_Linux-x86_64-multicore-CUDA'
    ]

    for dir in result_dirs:
        process_result(dir + "/result_stmv_2500_steps")

    plt.title('CPU Time vs No of Cores 2500 Steps')
    plt.legend(result_dirs)
    plt.show()


