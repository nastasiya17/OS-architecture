# Lab1 - REST Сервис

**Создаем БД:**

sudo mysql

mysql> create database Person_base;

mysql> use Person_base;

mysql> source my_commands.sql;

mysql> quit;

**Запросы:**

GET http://localhost:8080/person

GET http://localhost:8080/person?login=8592

POST http://localhost:8080/person?age=35&first_name=Jon&last_name=Jonos&login=7536
