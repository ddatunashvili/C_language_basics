# C პროგრამირების ენა

| საკითხები         | ლინკი                                            |
|-------------------|-------------------------------------------------|
| `Starting`         | [Starting](https://github.com/ddatunashvili/C_language_basics/tree/master/starting)     |
| `Sizes`            | [Sizes](https://github.com/ddatunashvili/C_language_basics/tree/master/Sizes)           |
| `Strings`          | [Strings](https://github.com/ddatunashvili/C_language_basics/tree/master/Strings)       |
| `Functions`        | [Functions](https://github.com/ddatunashvili/C_language_basics/tree/master/Functions)   |
| `Pointers`         | [Pointers](https://github.com/ddatunashvili/C_language_basics/tree/master/pointers)     |
| `Structures`       | [Structures](https://github.com/ddatunashvili/C_language_basics/tree/master/Structures)  |
| `Unions`           | [Unions](https://github.com/ddatunashvili/C_language_basics/tree/master/unions)        |
| `Data Structures`  | [Data Structures](https://github.com/ddatunashvili/C_language_basics/tree/master/data_structs) |
| `Arrays`           | [Arrays](https://github.com/ddatunashvili/C_language_basics/tree/master/Arrays)          |
| `Memory Management`| [Memory Management](https://github.com/ddatunashvili/C_language_basics/tree/master/memory) |
| `Recursion`        | [Recursion](https://github.com/ddatunashvili/C_language_basics/tree/master/recurs)      |
| `Files`            | [Files](https://github.com/ddatunashvili/C_language_basics/tree/master/Files)           |
| `Preprocessor Directives` | [Preprocessor Directives](https://github.com/ddatunashvili/C_language_basics/tree/master/ppdirectives) |
| `Classes`          | [Classes](https://github.com/ddatunashvili/C_language_basics/tree/master/Classes)       |

## გარემოს მომზადება

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

4. **გადასვლა ფოლდერშ**:
   - სადაც თქვენს C ფაილებს შეინახავთ გადადით ბრძანებით ფოლდერზე cmd ში:

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

## მაგალითი

თუ თქვენი C ფაილს ჰქვია `example.c`, მაშინ ბრძანებები იქნება:

```bash
gcc -o example.exe example.c
example.exe
```

ან მოკლედ

```bash
gcc -o example.exe example.c && example.exe
```

## მნიშვნელოვანი ინფორმაცია

აუცილებელია დაამატოთ `C:\MinGW\bin` გარემოს ცვლადებში. ამის გაკეთება უნდა მოიცვას შემდეგი ნაბიჯები:

**Environment Variables გახსნა:**

- დააჭირეთ **Start** ღილაკს და ჩაწერეთ "Environment Variables".

- აირჩიეთ **Environment Variables**.

**Path-ის რედაქტირება:**

- მოძებნეთ `Path`, შემდეგ დააჭირეთ **Edit**.

**ახალი პათის დამატება:**

- დააჭირეთ **New** და ჩააკოპირეთ `C:\MinGW\bin`.

**შენახვა:**

- დააჭირეთ **OK**.

**შეამოწმეთ:**

- გახსენით CMD და ჩაწერეთ `g++ --version`, რათა დარწმუნდეთ, რომ MinGW მუშაობს.
