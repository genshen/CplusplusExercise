# C++程序设计模拟试卷(一)
### 一、单项选择题(本大题共20小题，每小题1分，共20分)在每小题列出的四个备选项中只有一个是符合题目要求的，请将其代码填写在题后的括号内。错选、多选或未选均无分。

1. 编写C++程序一般需经过的几个步骤依次是(   )  
A. 编辑、调试、编译、连接  B. 编辑、编译、连接、运行  
C. 编译、调试、编辑、连接D. 编译、编辑、连接、运行  

2. 决定C++语言中函数的返回值类型的是(   )  
A. return语句中的表达式类型  
B. 调用该函数时系统随机产生的类型  
C. 调用该函数时的主调用函数类型  
D. 在定义该函数时所指定的数据类型  

3. 下面叙述不正确的是(   )  
A. 派生类一般都用公有派生  
B. 对基类成员的访问必须是无二义性的  
C. 赋值兼容规则也适用于多重继承的组合  
D. 基类的公有成员在派生类中仍然是公有的  

4. 所谓数据封装就是将一组数据和与这组数据有关操作组装在一起，形成一个实体，这实体也就是(   )  
A. 类  
B. 对象  
C. 函数体  
D. 数据块  

5. 在公有派生类的成员函数不能直接访问基类中继承来的某个成员，则该成员一定是基类中的(   )  
A. 私有成员  
B. 公有成员  
C. 保护成员  
D. 保护成员或私有成员  

6. 对基类和派生类的关系描述中，错误的是(   )  
A. 派生类是基类的具体化  
B. 基类继承了派生类的属性  
C. 派生类是基类定义的延续  
D. 派生类是基类的特殊化  

7. 关于this指针使用说法正确的是(   )  
A. 保证每个对象拥有自己的数据成员，但共享处理这些数据的代码  
B. 保证基类私有成员在子类中可以被访问  
C. 保证基类保护成员在子类中可以被访问  
D. 保证基类公有成员在子类中可以被访问  

8. 所谓多态性是指(   )  
A. 不同的对象调用不同名称的函数  
B. 不同的对象调用相同名称的函数  
C. 一个对象调用不同名称的函数  
D. 一个对象调用不同名称的对象  

9. 一个函数功能不太复杂，但要求被频繁调用，则应把它定义为(   )  
A. 内联函数  
B. 重载函数  
C. 递归函数  
D. 嵌套函数  

10. 为了避免嵌套的条件语句if-else的二义性,C/C++语言规定：else与(   )配对.  
A	缩排位置相同的if	 			B	其之前最近if  
C	其之后最近的if				 D	同一行上的if  

11. 假设ClassY:publicX，即类Y是类X的派生类，则说明一个Y类的对象时和删除Y类对象时，调用构造函数和析构函数的次序分别为(   )  
A. X,Y；Y,X  
B. X,Y；X,Y  
C. Y,X；X,Y  
D. Y,X；Y,X  

12. 适宜采用inline定义函数情况是(   )  
A. 函数体含有循环语句  
B. 函数体含有递归语句  
C. 函数代码少、频繁调用  
D. 函数代码多、不常调用  

13. 假定一个类的构造函数为A(int aa,int bb) {a=aa--;b=a*bb;},则执行A x(4,5)；语句后，x.a和x.b的值分别为(   )  
A. 3和15  
B. 5和4  
C. 4和20  
D. 20和5  

14. 在类中说明的成员可以使用关键字的是(   )  
A. public  
B. extern  
C. cpu  
D. register  

15. 下列不能作为类的成员的是(   )  
A. 自身类对象的指针  
B. 自身类对象  
C. 自身类对象的引用  
D. 另一个类的对象  

16. 使用地址作为实参传给形参，下列说法正确的是(   )  
A. 实参是形参的备份  
B. 实参与形参无联系  
C. 形参是实参的备份  
D. 实参与形参是同一对象  

17. 下列程序的输出结果是(   )  
A. 10，30，50  
B. 10，20，30  
C. 20，40，60  
D. 10，30，60  
 ```c
 #include <iostream>
 int main(){
    int n[][3]={10,20,30,40,50,60};
    int *p[3];
    p=n;
    cout<<p[0]][0]<<"，"<<*(p[0]+1)<<"，"<<(*p)[2]<<endl;
    return 0;
 }
 ```

18. 在C++中，使用流进行输入输出，其中用于屏幕输入(   )  
A. cin  
B. cerr  
C. cout  
D. clog  

19. 假定AA为一个类，a()为该类公有的函数成员，x为该类的一个对象，则调用x对象中函数成员a()的格式为(   )  
A. x.a  
B. x.a()  
C. x->a  
D.(*x).a()  

20. 关于对象概念的描述中，说法错误的是(   )  
A. 对象就是C语言中的结构变量  
B. 对象代表着正在创建的系统中的一个实体  
C. 对象是类的一个变量  
D. 对象之间的信息传递是通过消息进行的  

### 二、填空题(本大题共20小题，每小题1分，共20分)请在每小题的空格中填上正确答案。错填、不填均无分。
1. C++的流库预定义了4个流，它们是cin、cout、clog和___。
2. 每个对象都是所属类的一个_______。
3. 在已经定义了整型指针ip后，为了得到一个包括10个整数的数组并由ip所指向，应使用语句_______。
4. 如果定义变量: int (*parr)[10],则parr的含义是：________。
5. 定义类的动态对象数组时，系统只能够自动调用该类的___构造函数对其进行初始化。
6. 表达式cout<<end1 还可表示为___。
7. 在C++中，访问一个指针所指向的对象的成员所用的指向运算符是___。
8. 假如一个类的名称为MyClass，使用这个类的一个对象初始化该类的另一个对象时，可以调用___构造函数来完成此功能。
9. 对赋值运算符进行重载时，应声明为___函数。
10. 如果要把A类成员函数f（）且返回值为void声明为类B的友元函数，则应在类B的定义中加入的语句___。
11. 下列程序段的输出结果是___。  
    for(i=0,j=10,k=0;i<=j;i++,j-=3,k=i+j);cout<<k;
12. String 类的___方法返回查找到的字符串在主串的位置。
13. 下面代码中while循环执行次数是___。  
    ```c
    int n=0;
    while(n=1)n++;
    ```
14. a是一个3行4列的二维数组，则*(ia[2]+3)表示的是_______。
15. C++语言支持的两种多态性分别是编译时的多态性和___的多态性。
16. 函数重载时要求同名函数的形参要满足_________________________的要求，否则无法确定是哪个函数。
17. 执行下列代码  
    ```c
    string str("HelloC++");
    cout<<str.substr(5,3);
    ```  
    程序的输出结果是___。
18. 在面向对象的程序设计中，将一组对象的共同特性抽象出来形成___。
19. 定义类动态对象数组时，元素只能靠自动调用该类的___来进行初始化。
20. 有函数max声明如下：int max(int t , int d); ,试定义并初始化一个指向该函数的函数指针:_________。

### 三、改错题(本大题共5小题，每小题2分，共10分)下面的类定义中有一处错误，请用下横线标出错误所在行并给出修改意见。
1. 找出下面程序的错误并改正:  
 ```c
 #include <iostream>
 class Test
 {
 private:
     int x,y=20;
 public:
     Test(int i,int j){x=i,y=j;}
     int getx(){return x;}
     int gety(){return y;}
 };
 int main()
 {
     Test mt(10,20);
     cout<<mt.getx()<<endl;
     cout<<mt.gety()<<endl;
 return 0;
 }
 ```

2. 找出下面程序的错误并改正:
 ```c
 #include <iostream>
 class Test{
     int x,y;
 public:
     fun(int i,int j){
         x=i;y=j;
     }
     show(){
         cout<<"x="<<x;
         if(y)
         cout<<",y="<<y<<endl;
         cout<<endl;
     }
 };
 int main(){
     Test a;
     a.fun(1);
     a.show();
     a.fun(2,4);
     a.show();
 return 0;
 }
  ```

3. 找出下面程序的错误并改正:
  ```c 
 #include <iostream>
 using namespace std;

 void malloc(int *p, int length) {
     p= new int[length];
     for (int i = 0; i < length; i++) {
         p[i] = i;
     }
 }

 int main() {
     int *p;
     malloc(p, 10);
     for(int i=0;i<10;i++){
         cout<<p[i]<<" "; //output:0 1 2 3 4 5 6 7 8 9 10
     }
 }
 ```

4. 找出下面程序的错误并改正:
 ```c
 #include <iostream>
 class X{
 public:
     int x;
 public:
     X(int x){
         cout<<this->x=x<<endl;
     }
     X(X &t){
         x=t.x;
         cout<<t.x<<endl;
     }
     void fun(X);
 };
 void fun(X t){
     cout<<t.x<<endl;
 }
 int main(){
     fun(X(10));
     return 0;
 }
 ```

5. 找出下面程序的错误并改正:
 ```c
 #include <iostream>
 #include <string.h>
 class Bas{
 public:
     Bas(char *s="＼0"){
         strcpy(name,s);
     }
     void show();
 protected:
     char name［20］;
 };

 Bas b;
 void show(){
     cout<<"name:"<<b.name<<endl;
 }
 int main(){
     Bas d2("hello");
     show();
     return 0;
 }
 ```

### 四、完成程序题(本大题共5小题，每小题4分，共20分)
1. 在下面程序横线处填上适当字句，以使该程序执行结果正确：  
 ```c
 #include <iostream>
 using namespace std;

 int main() {
     //功能:统计输入英文字母的个数
     int Char[26*2] = {0};
     char ch;
     while(cin.get(ch)){
         //Ascii表:A:65,B:66,...,Z:90.  a:97,b:98,...,z:122
         if(ch>=65 && ch <=90){
             Char[ch-65]++;
         } else if(ch>=97 && ch<=122){
             _______________________;
         }else{
             break;
         }
     }

     //输出统计的各个字母的频率
     for(int i =0;i<26*2;i++){
         cout<<(char)((i+65)>=91?i+65+6:i+65)<<"Count:"<<Char[i]<<endl;
     }
     return 0;
 }
 ```  

2. 在下面程序的底画线处填上适当的字句，使该程序执行结果为40。
 ```c
 #include <iostream>
 class Test{ 
 public:
     ______;
     Test (int i=0){
         x=i+x;
     }

     int Getnum(){
         return Test::x+7;
     }
 };
 _______;
 int main(){
     Test test;
     cout<<test.Getnum()<<endl;
 return 0;
 }
 ```  

3. 在下列程序的空格处填上适当的字句，使输出为：0，2，10。
 ```c
 #include <iostream>
 #include <cmath>
 class Magic{
     double x;
 public:
     Magic(double d=0.00):x(fabs(d))
     {}
     Magic operator+(______)
     {
     return Magic(sqrt(x*x+c.x*c.x));
     }
     _______operator<<(ostream & stream,Magic & c)
     { stream<<c.x;
     return stream;
     }
 };
 int main(){
     Magic ma;
     cout<<ma<<", "<<Magic(2)<<", "<<ma+Magic(-6)+
     Magic(-8)<<endl;
 return 0;
 }
 ```   

4. 下面是一个输入半径，输出其面积和周长的C++程序，在下划线处填上正确的语句。
 ```c
 #include <iostream>
 _________;
 _________;
 int main(){
     double rad;
     cout<<"rad=";
     cin>>rad;
     double l=2.0*pi*rad;
     double s=pi*rad*rad;
     cout<<"＼n The long is："<<l<<endl;
     cout<<"The area is："<<s<<endl;
 return 0;
 }
 ```

5. 程序实现大写字母转换成小写字母。
 ```c
 #include <iostream>
 int main(){
     char a;
     _______;
     cin>>a;
     if(_______)
     a=a+i;
     cout<<a<<endl;
 return 0;
 }
 ```  

### 五、程序分析题(本大题共4小题，每小题5分，共20分)
1. 给出下面程序输出结果。
 ```c
 #include <iostream>
 using namespace std;

 int search(int *data, int target, int left, int right) {
     int mid = (left + right) / 2;
     while (left < right) {
         if (data[mid] == target) {
             return mid;
         }
         if (target > data[mid]) {
             left = mid+1;
         } else {
             right = mid-1;
         }
         mid = (left + right) / 2;
     }
     return -1;
 }

 int main() {
     int data[16] = {-4, -2, 0, 1, 3, 6, 8, 10, 10, 10, 20, 23, 25, 35, 100};
     int index = search(data, 10, 0, 16);
     cout << index<<endl;
     index = search(data, 9, 0, 16);
     cout << index<<endl;
 }
 ```  

2. 给出下面程序输出结果。
 ```c
 #include <cmath>
 #include <iostream>
 #include <iomanip>
 bool fun(long n);

 int  main() {
     long a = 10, b = 30, l = 0;
     if (a % 2 == 0) a++;
     for (long m = a; m <= b; m += 2)
         if (fun(m)) {
             if (l++ % 10 == 0)
                 cout << endl;
             cout << setw(5) << m;
         }
 return 0;
 }

 bool fun(long n) {
     int sqrtm = (int) sqrt(n);
     for (int i = 2; i <= sqrtm; i++)
         if (n % i == 0)
             return false;
     return true;
 }
 ```  

3. 给出下面程序输出结果。
 ```c
 #include <iostream>
 class Test {
     int x, y;
 public:
     Test(int i, int j = 0) {
         x = i;
         y = j;
     }
     int get(int i, int j) { return i + j; }
 };

 int main() {
     Test t1(2), t2(4, 6);
     int (Test::*p)(int, int= 10);
     p = Test::get;
     cout << (t1.*p)(5) << endl;
     Test *p1 = &t2;
     cout << (p1->*p)(7, 20) << endl;
 return 0;
 }
 ```  

4. 给出下面程序输出结果。
 ```c
 #include <cstring>
 #include <iomanip>
 #include <iostream>
 using namespace std;

 class student {
     char name[8];
     int deg;
     char level[7];
     friend class process; // 声明友元类

 public:
     student(char na[], int d) {
         strcpy(name, na);
         deg = d;
     }
 };

 class process {
 public:

     void trans(student &s) {
         int i = s.deg / 10;
         switch (i) {
             case 9:
                 strcpy(s.level, "优");
                 break;
             case 8:
                 strcpy(s.level, "良");
                 break;
             case 7:
                strcpy(s.level, "中");
                 break;
             case 6:
                 strcpy(s.level, "及格");
                 break;
             default:
                 strcpy(s.level, "不及格");
         }
     }

     void show(student &s) { cout << setw(10) << s.name << setw(4) << s.deg << setw(8) << s.level << endl; }
 };

 int main() {
     student st[] = {student("张三", 78), student("李四", 92), student("王五", 62), student("孙六", 88)};
     process p;
     cout << "结 果:" << "姓名" << setw(6) << "成绩" << setw(8) << "等级" << endl;

     for (int i = 0; i < 4; i++) {
         p.trans(st[i]);
         p.show(st[i]);
     }
     return 0;
 }
 ```  

### 六、程序设计题(本大题每小题10分，选一题完成即可，总分10分)
1. 已定义一个Shape抽象类，在此基础上派生出矩形Rectangle和圆形Circle类，二者都有GetPerim（）函数计算对象的周长，并编写测试main（）函数。
 ```c
 class Shape {
 public:
     Shape() {}
     ~Shape() {}
     virtual float GetPerim()=0;
 }
 ```  

2. 在下面模板的基础上，编写四个函数，分别完成两个int值的加、减、乘、除运算，并在主函数编写测试：通过调用getFunctionByType函数分别得到指向这四个函数的函数指针，再通过函数指针分别调用这四个函数。
 ```c
 //加法函数如下,自己补充完成减法、乘法、除法函数
 int add(int a,int b){
     return a+b;
 }

 //该函数的参数是int,返回值是一个 int (int,int)类型的函数指针
 ______ getFunctionByType(int type){
     switch (type){
         case 0:
             return add;
         case 1:
             _________ //返回减法函数的函数指针
         case 3:
             _________ //返回乘法函数的函数指针
         case 4:
             _________ //返回除法函数的函数指针
             default return add; //默认返回加法函数的函数指针
     }
 }
 ```   
