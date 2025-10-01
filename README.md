## 一种简单的编译方式

```txt
g++ checker.cpp -o checker.exe
```

##
若在 Windows 下运行程序输出为乱码,大概率是 Windows 控制台使用了 GBK 编码，显示 UTF-8 字符时出现乱码，在 设置-时间和语言-语言和区域-Windows 显示语言 中打开使用 Unicode UTF-8 提供全球语言支持，再运行即可

也可以在程序编译时更改为 GBK 编码
```txt
g++ -finput-charset=UTF-8 -fexec-charset=GBK checker.cpp -o checker.exe
```
