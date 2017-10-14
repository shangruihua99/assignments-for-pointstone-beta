# assignments-for-pointstone-beta
先定义几个int：ops（output system输出的进制类型）；
              ips（iutput system输入的进制类型）；
              ni10（number in 10把输入的数字以十进制的形式储存在这里）；
再定义1个char：num【50】（number输入的数字，最多支持50位）

然后：
获取输出的进制类型
获取输入的进制类型
获取输入的数字
将输入的数字的长度储存在int l里

然后
定义一个int i
从左到右将输入的数字转化为10进制数并储存在ni10中

然后
定义一个int：remainder（余数）
       char opn（output number输出的数字）

然后
把i归零
从左到右判断输出的数字，并把它们储存在opn里（这里是倒序）

最后
把opn倒着输出，获得输出的数字

结束
