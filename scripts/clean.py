"""
Delete all exe files from the current directory and all sub-directories.
"""


import os

dir_path = "/media/winai/Copper_disk0/Linux/Programming/CPP/code"

for (dir_path, dir_names, file_names) in os.walk(dir_path): 
    for file_name in file_names:
        if len(file_name.split(".")) < 2:
            os.remove(os.path.join(dir_path, file_name)) 
            print(file_name)
    