import os
import shutil


def remove_dirs(start_path, dir_names):
    for root, dirs, files in os.walk(start_path):
        for dir in dirs:
            if dir in dir_names:
                shutil.rmtree(os.path.join(root, dir))


# Specify the directory you want to start from
start_dir = "."

# Specify the directory names you want to remove
dir_names = ["obj", "bin"]

remove_dirs(start_dir, dir_names)
