
CREATE TABLE A (
a varchar(10)
);
INSERT INTO A VALUES ('a1');
INSERT INTO A VALUES ('a2');
INSERT INTO A VALUES ('a3');

SELECT a FROM A
WHERE a < (SELECT a FROM A WHERE a = 'a4')
AND a IN (SELECT a FROM A);

drop table A;
