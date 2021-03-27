当定义一个数组a时，编译器根据指定的元素个数和元素的类型分配确定大小（元素类型大小×元素个数）的一块内存，并把这块内存的名字命名为 a

在表达式中，数组名总是被转换为指向该数组第一个元素的"指针" &a==a 


#头文件格式
#ifndef _AAA_H_
#define _AAA_H_
...
#endif

#格式化对齐

%[flags][width][.prec][hlL]type

flags: - 左对齐 + 在前面放+或- (space) 正数留空 0 0填充
hlL: hh 单个字节  h short  l long  ll long long  L long double
