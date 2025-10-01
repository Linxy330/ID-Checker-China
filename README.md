## 一种简单的编译方式

```txt
g++ checker.cpp -o checker.exe
```

若在Windows下运行程序输出为乱码,

```txt
g++ -finput-charset=UTF-8 -fexec-charset=GBK checker.cpp -o checker.exe
```
