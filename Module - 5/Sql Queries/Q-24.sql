-- From the following table, write a SQL query to calculate average
-- price of the items for each company. Return average price and company
-- code

SELECT PRO_COM AS company_code, AVG(PRO_PRICE) AS average_price FROM ITEM_MAST GROUP BY PRO_COM;
