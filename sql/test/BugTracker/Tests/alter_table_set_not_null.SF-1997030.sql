CREATE TABLE foo (i INT);
INSERT INTO foo (i) VALUES (NULL);
ALTER TABLE foo ALTER COLUMN i SET NOT NULL;

DROP TABLE foo;
