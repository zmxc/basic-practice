#include <stdio.h>
// 基本的文件操作函数熟悉
// 1. FILE * fp   一个指向FILE 的指针 fp   -> file = &FILE
// 2. fopen(filename, model) FILE*   //打开文件流
// 3. fprintf    //写入文件
// 4. fscanf     //读取文件遇\n返回
// 5. fgetc      //字符获取
// 6. fputc      //字符写入
// 7. fgets      //连续读取
// 8. fputs      //连续写入
// 9. fclose     //关闭文件操作

// read file
int read_file(const char * filename)
{

    FILE * fp;                    //file pointer
    char buff[255];

    fp = fopen(filename, "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff );

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
    return 0;
}

// write file
int write_file(const char * filename, const char * content)
{
    FILE *fp;
    fp = fopen(filename, "a+");
    //fprintf(fp, content);
    fputs(content, fp);
    fclose(fp);
    return 0;
}

// copy file
/*
 * @param func: copy_file
 * @param desc: copy file
 * @param args: src , dest
 * @param return: int
 * @param author: closure
 * @param time: 2015年1月15日
 */
int copy_file(const char * src, const char * dest)
{
    ;
}

// delete file
int del_file(const char * filename){
    FILE * file;
    file = fopen(filename, "w+");
    //
    int len = remove(filename);

    if(len != 0)
    {
        printf("delete ok!");
    }
}


//
int main(int argc, char* argv[])
{
    //常用函数列表
    fopen(<#(const char*)__filename#>, <#(const char*)__modes#>);
    fprintf(<#(FILE*)__stream#>, <#(const char*)__format, ...#>);
    fscanf(<#(FILE*)__stream#>, <#(const char*)__format, ...#>);
    fputc(<#(int)__c#>, <#(FILE*)__stream#>);
    fgetc(<#(FILE*)__stream#>);
    fputs(<#(const char*)__s#>, <#(FILE*)__stream#>);
    fgets(<#(char*)__s#>, <#(int)__n#>, <#(FILE*)__stream#>);
    fclose(<#(FILE*)__stream#>);
    remove(<#(const char*)__filename#>);




    char filename[] = "hello.txt";
    write_file(filename, "hello, world!");
    read_file(filename);
    return 0;
}