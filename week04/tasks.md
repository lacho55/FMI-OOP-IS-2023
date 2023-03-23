<h3>
Да се намери резултатът от изпълнението на следната програма:

```C++
#include<iostream>

class Q {
    public:
        void f();
        void g();
        int x;
};

void Q::f() {
    std::cout << "f()\n" << "x = " << std:: endl; 
}

void Q::g() {
    std::cout << "g()\n" << "x = " << std:: endl; 
}

int main() {
    Q obj;

    int Q::*px = &Q::x;
    obj.*px = 25;
    std::cout << obj.*px << std::endl;

    void (Q::*ptr)() = &Q::f;
    (obj.*ptr)();

    ptr = &Q::g;
    (obj.*ptr)();

    return 0;
}

```
</h3>



## Задача 1
<h3>
Да се направи клас Мovie, който в себе си има полетата име, режисьор и продължителноста на филма. За този клас трябва да се реализират:
<ul>
<li>конструктор по подразбиране </li>
   <li>конструктор за копиране</li>
  <li> конструктор с параметри </li>
  <li> деструктор </li>
  <li> оператор за присвояване</li>
    ```c++
    
    Object& operator=(const Object& other) {
        if (this != &other) {
            destroy();
            copy(other);
        }
        return *this;
    }
    ```
   <li>оператора за вход</li>
   <li>оператор за изход</li>
</ul>
   </h3>

## Задача 2
Реализирайте клас, който представя масив от int ове с променлива дължина. Класът да поддържа операциите добавяне на елемент в края, проверка дали един елемент се съдържа в масива, проверка дали масива е празен, проверка за размера на масива.

## Задача 3
Да се дефинира голяма четворка за класа BankAccount.

``` C++
const int MAX_SIZE = 100;
char temp[MAX_SIZE];

class BankAccount {
    private:
        char* name;
        char* accountnum;
        double balance;
    public:

};
```
----------
