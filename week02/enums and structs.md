# Практиукум #2

### Структури
Mасивитe ни позволяваха да съхраняваме елементи от един и същи тип в последователна наредба. Например масив от цели числа, символи и тн. В реалния живот се налага да работим с елементи от различни типове. Тогава се намесват структурите. Структурите са типове данни дефинирани от потребителя, които ни позволяват да групираме елементи от различни типове и да ги съхраняваме.

```c++
struct <name>
{
  <member definition>;  //  int arr[5];
  <member definition>;  //  int age;
  <member definition>;  //  double weight; 
        ...
  <member definition>;
  
}<one or more variables of <name> type>;

/*---------- Example ----------*/

struct Student
{
  char name[20];
  char faculty_number[5];
  unsigned int age;

};

```

### Дефиниране на променливи от тип структура
За структурата в паметта не се отделя памет. Паметта се отделя чак когато създадем обект от тип структура. Както при обикновените типове и тук дефинирането на променливи и константи от даден потребителски тип(структура) става чрез името на типа и името на променливата след това.

```c++
<name> <variable_name>;

/*---------- Example ----------*/

Student student_one;

```

### Достъп до елементите(членовете) на структурата
Достъпът до, който и да е, елемент на структурата се осъществява чрез оператора(.). Като използваме следния синтаксис:

```c++
<name>.<member_name>;

/*---------- Example ----------*/

cout << student_one.name << endl;
```

### Функции със структури
За структурите е характерно, че променливите от тип структура могат да се инициализират със стойности на вече дефинирана променлива от същия тип. 

```c++

Student student_one;
Student student_two = student_two;

```
Но за да работим със структурите ефективно трябва да дефинираме и други функции, като например функция:
* за инициализиране на елементите на структурата
* за извеждане на елементите на структурата на екрана
* за променяне стойностите на елементите на структурата

<br>

## <a href = "https://en.wikipedia.org/wiki/Data_structure_alignment?fbclid=IwAR0Vjz-hzTXGnP8-cDIAOhWutSGu7xYLF1OnojYAip4mY-pK8GYZ3SYLKeA" target = "_blank"> Допълнително четиво за структури 1</a>

## <a href = "https://www.geeksforgeeks.org/data-structure-alignment/?fbclid=IwAR0m3INKWr6ygvoFIau5UjxhFte93-PYY4MZ8cPWPxUE0u0ndlQ4ZQvpFbI" target = "_blank">Допълнително четиво за структури 2 </a>


## Енумерации(Enums)
Eнумерацията е отделен тип, чиято стойност е ограничена до диапазон от стойности, който може да включва няколко изрично посочени константи(енумератори). Стойностите на константите са стойности от интегрален тип, известен като основен тип на eнумерацията Eнумерацията има същия размер, представяне на стойност и изисквания за подравняване като неговия основен тип. Освен това всяка стойност на енумерацията има същото представяне като съответната стойност на основния тип. <br />

```c++
enum <name>
{
	<element>, //0
	<element>, //1
	.
	.
	.
};

enum IceCream1
{
	vanilla, //0
	chocolate, //1
	strawberry, //2
	mango, //3
	oreo //4
};

enum IceCream2 : char
{
	vanilla, //0
	chocolate, //1
	strawberry, //2
	mango, //3
	oreo //4
};
```

### Unscoped enumarations (plain enums) vs Scoped enumarations (enum class | struct)
```c++
enum class Color { red, green, blue }; // enum class
enum Animal { dog, cat, bird, human }; // plain enum 
```

- enum classes
  - енумераторите са локални за enuma и техните стойности не се преобразуват имплицитно към други типове (another enum or int).
- Plain enums
  - енумераторите са в същия scope като enuma и техните стойности се преобразуват имплицитно към integers и други типове.

```c++
enum Color { red, green, blue };                    // plain enum 
enum Card { red_card, green_card, yellow_card };    // another plain enum 
enum class Animal { dog, deer, cat, bird, human };  // enum class
enum class Mammal { kangaroo, deer, human };        // another enum class

void fun() {
    // examples of bad use of plain enums:
    Color color = Color::red;
    Card card = Card::green_card;

    int num = color;    // no problem

    if (color == Card::red_card) // no problem (bad)
        cout << "bad" << endl;

    if (card == Color::green)   // no problem (bad)
        cout << "bad" << endl;

    // examples of good use of enum classes (safe)
    Animal a = Animal::deer;
    Mammal m = Mammal::deer;

    int num2 = a;   // error
    if (m == a)     // error (good)
        cout << "bad" << endl;

    if (a == Mammal::deer) // error (good)
        cout << "bad" << endl;
}
```

Извод: enum class | struct трябва да се предпочитат, защото причиняват по-малко изненади, които потенциално биха могли да доведат до грешки.

