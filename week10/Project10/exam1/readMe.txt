exit()函数与_exit()函数最大的区别就在于exit()函数在调用exit系统调用之前要检查文件的打开情况，把文件缓冲区中的内容写回文件，就是"清理I/O"缓冲。
本次实验中并没有使用行缓冲，除非缓冲区满或者程序正常结束，不然缓冲数据都还在，调用exit(0)后，缓冲数据被输出，而调用_exit(0)不会

return同exit(0)

