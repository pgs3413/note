#mkefile 是一个文件

#文件内容
suanshu.exe:main.o jia.o jian.o
    gcc main.o jia.o jian.o -o suanshu.exe
main.o:main.c
    gcc -c main.c -o main.o
jia.o:jia.c
    gcc -c jia.c -o jia.o
jian.o:jian.c
    gcc -c jian.c -o jian.o
        
    
#执行命令 make


clean:
    rm -f *.o suanshu.exe
    
#执行命令 make clean

#模板
main.exe:main.o jia.o jian.o
    gcc *.o -o $@
%.o:%.c
    gcc -c $< -o $@
    
    
   
