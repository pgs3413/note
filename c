当定义一个数组a时，编译器根据指定的元素个数和元素的类型分配确定大小（元素类型大小×元素个数）的一块内存，并把这块内存的名字命名为 a

在表达式中，数组名总是被转换为指向该数组第一个元素的"指针" &a==a 


#头文件格式
#ifndef _AAA_H_
#define _AAA_H_
...
#endif

#格式化对齐

printf:  %[flags][width][.prec][hlL]type

flags: - 左对齐 + 在前面放+或- (space) 正数留空 0 0填充
hlL: hh 单个字节  h short  l long  ll long long  L long double

scanf: %[flag]type

flag: * 跳过   数字 最大字符数   hh h l ll L


#文件输入输出

FILE *fp=fopen("file","r"); //r  r+ : 从文件头开始  w  w+:读写 a ..x:只新建
 if(fp){
 //字符文件
int num;
fscanf(fp,"%d",&num); // fprintf
printf("%d\n",num);
//二进制文件
fwrite fread 

fclose(fp);

}else{ //没有打开 ， 返回NULL
''
}

#移位运算 按照int运算

i << j : i中所有的位向左移动j个位置，而右边填入0  
i >> j : i中所有的位向右移动j个位置，unsigned 左边填入0 ;signed 左边填入原来的最高位
