import os
os.add_dll_directory(os.environ['mingw64Path'])

from build import add_pybind11

print(add_pybind11.add(1, 2))