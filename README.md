# Компилятор языка программирования TinkovLang

---

## Краткое описание

Разработка данного языка началась в декабре 2023 года, когда в интернете были популярны мемы с нарезками цитат Олега Тинькова из интервью. Этим объясняется синтаксис языка и имена переменных в тестовых программах.

Компилятор представляет собой набор нескольких программ: [frontend](), [middleend](), [backend]().

- [**frontend**]() - выполняет лексический анализ (токенизацию) и строит из токенов абстракное синтаксическое дерево (AST)
- [**middleend**]() - выполняет над AST набор оптимизации
- [**backend**]() - выполняет трансляцию AST в ассемблерный текст (NASM)

Язык поддерживает работу только с целыми числами, но с помощью [некоторых исхищрений]() симулирует операции с плавающей точкой фиксированной точности.

## Установка и первый запуск

1. Клонирование репозитория

    ```
    git clone https://github.com/UjeNeTORT/tinkov_lang.git
    ```

2. Компиляция

    ```
    make
    ```
3. Первый запуск

    ```
    make run
    ```

Введите 3 числа - коэффициенты *a, b, c* квадратного уравнения $ax^2 + bx + c = 0$.

Насладитесь его корнями:

Невозможное уравнение      |  Бесконечно много корней  | Один корень               | Два корня
:-------------------------:|:-------------------------:|:-------------------------:|:-------------------------:
![](img/square_imp.png)    |  ![](img/square_inf.png)  | ![](img/square_single.png)| ![](img/square_two.png)

## Ваша первая программа на TinkovLang



## Синтаксис TinkovLang


Синтаксис языка доступен в [EBNF нотации (расширенная форма Бэкуса-Наура)](https://en.wikipedia.org/wiki/Extended_Backus%E2%80%93Naur_form) в файле [`EBNF/EBNF.txt`](https://github.com/UjeNeTORT/tinkov_lang/blob/main/EBNF/EBNF.txt).

Примеры использования некоторых конструкций доступны в файле [`EBNF/omega_plus.txt`](https://github.com/UjeNeTORT/tinkov_lang/blob/main/EBNF/omega_plus.txt).

<blockquote>

<code>EBNF/omega_plus.txt</code>

```c
...
какая_разница x > 1 ?
олег_не_торопись
    <тело>
я_олигарх_мне_заебись
я_могу_ошибаться какая_разница  0 < x && x < 1  ?
олег_не_торопись
    <тело>
я_олигарх_мне_заебись
-----------------------------------------------
if (x > 1)
{
    <тело>
}
else if (0 < x && x < 1)
{
    <тело>
}
...
```
</blockquote>

## Структура AST

## MiddleEnd - оптимизации над AST

## BackEnd - трансляция в NASM