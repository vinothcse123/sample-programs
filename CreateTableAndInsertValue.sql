CREATE TABLE V6TABLE
(
MYBIGINT BIGINT,
MYVARCHAR VARCHAR(MAX),
);





DECLARE
@counter BIGINT,
@myString VARCHAR(1000)
BEGIN
SET @counter=100
WHILE @counter != 0
    BEGIN
	SET @counter=@counter-1;
	SET @myString='VINOTH';

	INSERT INTO   V6TABLE VALUES(@counter,@myString);
    END; 
END;

/*
DELETE FROM V6TABLE;
DROP TABLE V6TABLE;
 */

SELECT * FROM V6TABLE;
