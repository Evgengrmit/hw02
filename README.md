# Homework 02

### Part I

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдущем шаге.
```sh
% mkdir hw02
% cd hw02
% echo "# Homework 02" >> README.md
% git init
% git commit -m "first commit"
% git push origin master
```
3. Создайте файл `hello_world.cpp` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку `using namespace std;`.
4. Добавьте этот файл в локальную копию репозитория.
```sh
 % edit hello_world.cpp
```
5. Закоммитьте изменения с *осмысленным* сообщением.
```sh
 % git add .
 % git commit -m "Create hello_world.cpp"
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение `Hello world from @name`, где `@name` имя пользователя.
7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно `git add`?
```sh
 % edit hello_world.cpp
 % git commit -a -m "Update hello_world.cpp"
```
`git add` не надо выполнять повторно, потому что файлы уже находятся в статусе "отслеживаемые".

8. Запуште изменения в удалёный репозиторий.
```sh
% git push origin master
```
9. Проверьте, что история коммитов доступна в удалёный репозитории.

### Part II

**Note:** *Работать продолжайте с теми же репозиториями, что и в первой части задания.*
1. В локальной копии репозитория создайте локальную ветку `patch1`.
```sh
% git checkout -b patch1
```
2. Внесите изменения в ветке `patch1` по исправлению кода и избавления от `using namespace std;`.
```sh
% edit hello_world.cpp
```
3. **commit**, **push** локальную ветку в удалённый репозиторий.
```sh
% git commit -a -m "Fix codestyle"
% git push origin patch1
```
4. Проверьте, что ветка `patch1` доступна в удалёный репозитории.
5. Создайте pull-request `patch1 -> master`.
6. В локальной копии в ветке `patch1` добавьте в исходный код комментарии.
```sh
% edit hello_world.cpp
```
7. **commit**, **push**.
```sh
% git commit -a -m "Add comments"
% git push origin patch1
```
8. Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request
9. В удалённый репозитории выполните  слияние PR `patch1 -> master` и удалите ветку `patch1` в удаленном репозитории.
10. Локально выполните **pull**.
```sh
% git merge patch1
```
11. С помощью команды **git log** просмотрите историю в локальной версии ветки `master`.
```sh
 % git log
```
12. Удалите локальную ветку `patch1`.
```sh
 % git branch -d patch1
```

### Part III

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. Создайте новую локальную ветку `patch2`.
```sh
% git checkout -b patch2
```
2. Измените *code style* с помощью утилиты [**clang-format**](http://clang.llvm.org/docs/ClangFormat.html). Например, используя опцию `-style=Mozilla`.
```sh
% clang-format -style=Mozilla -i hello_world.cpp
```
3. **commit**, **push**, создайте pull-request `patch2 -> master`.
```sh
% git commit -a -m "Style - Mozilla"
% git push origin patch2
```
4. В ветке **master** в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
5. Убедитесь, что в pull-request появились *конфликты*.
6. Для этого локально выполните **pull** + **rebase** (точную последовательность команд, следует узнать самостоятельно). **Исправьте конфликты**.
```sh
% git checkout master
% git pull origin master # Переносим все изменения в ветке master из удаленного репозитория в локальный в ветку master
% git checkout patch2
% git rebase master # Конфликт слияния
% edit hello_world.cpp # Ручное разрешение конфликта
% git add hello_world.cpp # Показываем Git, что конфликт разрешен
% git commit -m "Fix conflicts"
% git rebase --continue
% git checkout master
% git merge patch2  #
```
7. Сделайте *force push* в ветку `patch2`
```sh
git push -f origin patch2
```
8. Убедитеcь, что в pull-request пропали конфликты.
9. Вмержите pull-request `patch2 -> master`.

## Links

- [hub](https://hub.github.com/)
- [GitHub](https://github.com)
- [Bitbucket](https://bitbucket.org)
- [Gitlab](https://about.gitlab.com)
- [LearnGitBranching](http://learngitbranching.js.org/)

```
Copyright (c) 2015-2020 The ISC Authors
```
