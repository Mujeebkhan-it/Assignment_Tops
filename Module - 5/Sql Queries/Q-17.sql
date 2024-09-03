-- All customers excluding those with rating <= 100 unless they are located in Roe

SELECT * FROM CUSTOMER WHERE (RATING > 100) OR (CITY = 'Roe' AND RATING <= 100);
