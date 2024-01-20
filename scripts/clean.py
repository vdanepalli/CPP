"""
Delete all exe files from the current directory and all sub-directories.
"""


import os

print("Working on the request")
deleted_files = 0
dir_path = "D:/Github/CPP/code/"

for (dir_path, dir_names, file_names) in os.walk(dir_path): 
    for file_name in file_names:
        # if len(file_name.split(".")) < 2:
        if ".exe" in file_name:
            deleted_files = 1
            os.remove(os.path.join(dir_path, file_name)) 
            print(file_name)
    

if not deleted_files:
    print("No .exe files to delete")