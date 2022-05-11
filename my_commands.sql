use Person_base;
show tables;
CREATE TABLE IF NOT EXISTS `Person` (`login` VARCHAR(256) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,`first_name` VARCHAR(256) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,`last_name` VARCHAR(256) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,`age` SMALLINT NOT NULL, PRIMARY KEY (`login`),KEY `fn` (`first_name`),KEY `ln` (`last_name`));
describe Person;
insert into Person (login, first_name,last_name,age) values 
('2435', 'Ivan','Ivanov','57'),
('8423', 'Petr','Petrov','36'),
('8592', 'Vasia','Pupkin','24'),
('4783', 'Sidr','Sidorov','47'),
('5792', 'Alex','Smirnov','62');
select * from Person;