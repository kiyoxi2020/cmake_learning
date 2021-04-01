import ctypes

so = ctypes.cdll.LoadLibrary
lib = so("./libadd_my.so")
print('computing: (a + b) * b')
a = 1
b = 2
print('a=%d, b=%d, (a + b) * b =%d'%(a, b, lib.add_my(a, b)))


