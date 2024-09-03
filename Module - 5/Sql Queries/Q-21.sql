-- From the following table, write a SQL query to calculate the average price for a manufacturer code of 16. Return avg.
SELECT AVG(PRO_PRICE) AS avg FROM ITEM_MAST WHERE PRO_COM = 16;
