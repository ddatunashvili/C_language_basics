# C პროგრამირების ენა

| საკითხები         | ლინკი                                            |
|-------------------|-------------------------------------------------|
| `Arrays`          | [Arrays](https://github.com/ddatunashvili/C_language_basics/Arrays)          |
| `data_structs`    | [Data Structures](https://github.com/ddatunashvili/C_language_basics/data_structs)    |
| `Functions`       | [Functions](https://github.com/ddatunashvili/C_language_basics/Functions)       |
| `pointers`        | [Pointers](https://github.com/ddatunashvili/C_language_basics/pointers)        |
| `Sizes`           | [Sizes](https://github.com/ddatunashvili/C_language_basics/Sizes)           |
| `Strings`         | [Strings](https://github.com/ddatunashvili/C_language_basics/Strings)         |
| `unions`          | [Unions](https://github.com/ddatunashvili/C_language_basics/unions)          |
| `Classes`         | [Classes](https://github.com/ddatunashvili/C_language_basics/Classes)         |
| `Files`           | [Files](https://github.com/ddatunashvili/C_language_basics/Files)           |
| `memory`          | [Memory Management](https://github.com/ddatunashvili/C_language_basics/memory)          |
| `ppdirectives`    | [Preprocessor Directives](https://github.com/ddatunashvili/C_language_basics/ppdirectives)    |
| `recurs`          | [Recursion](https://github.com/ddatunashvili/C_language_basics/recurs)          |
| `starting`        | [Starting](https://github.com/ddatunashvili/C_language_basics/starting)        |
| `Structures`      | [Structures](https://github.com/ddatunashvili/C_language_basics/Structures)      |


# გარემოს მომზადება

C პროგრამირების გარემოს მოსამზადებლად მიჰყევით შემდეგ ნაბიჯებს:

1. **MinGW-ის გადმოწერა**:
   - გადმოწერეთ MinGW ინსტალერი [აქ](https://sourceforge.net/projects/mingw/files/latest/download).
   
2. **MinGW-ის დაყენება**:
   - ინსტალერის გახსნისას დარწმუნდით, რომ აირჩიეთ შემდეგი კომპონენტები:
     - **mingw32-base**
     - **mingw32-gcc-objc**


3. **Visual Studio Code-ის გახსნა**:
   - გახსენით Visual Studio Code და შედით **Terminal** > **New Terminal**.
   - ან, გამოიყენეთ Windows CMD.

4. **დასავლა საქაღალდისათვის**:
   - იქედან, სადაც თქვენს C ფაილებს შეინახავთ, შეიყვანეთ:
     ```bash
     cd path/to/folder
     ```

5. **კოდის კომპილაცია**:
   - გაუშვით კომპილატორი თქვენი C ფაილის დასაკომპილირებლად:
     ```bash
     gcc -o <test.exe> <test>.c
     ```

6. **პროგრამის გაშვება**:
   - გაშვებისთვის ჩაწერეთ CMD ტერმინალში:
     ```bash
     <test.exe>
     ```

### მაგალითი

თუ თქვენი C ფაილი ეწოდება `example.c`, მაშინ ბრძანებები იქნება:

```bash
gcc -o example.exe example.c
example.exe
```

ან მოკლედ


```bash
gcc -o example.exe example.c && example.exe
```