## swig 

### 1. C convert to Python

#### Building a Python module:

```git
cd C2Python
swig -python example.i
gcc --fpic -c example.c example_wrap.c -I /usr/include/python2.7
ld -shared example.o example_wrap.o -o _example.so
```

#### We can now use the Python module as follows:
```git
>>> import example
>>> example.fact(5)
120
>>> example.my_mod(7,3)
1
>>> example.get_time()
'Sun Jul 15 13:23:44 2018\n'
>>>
```

### 2. C++ convert to Python 

- The first method

```git
cd Cplus2Python
swig -c++ -python example.i
python setup.py build_ext --inplace
```

- The second method

```git
cd Cplus2Python
swig -c++ -python example.i
gcc -fPIC -I/usr/include/python2.7/ -lstdc++ -shared -o _example.so example_wrap.cxx example.cpp
```

### 3. Ref:

For more details about swig, see [link1](http://www.swig.org/tutorial.html) [Link2](https://segmentfault.com/a/1190000013219667)
