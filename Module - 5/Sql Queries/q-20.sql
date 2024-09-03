-- From the following table, write a SQL query to select a range of
-- products whose price is in the range Rs.200 to Rs.600. Begin and end
-- values are included. Return pro_id, pro_name, pro_price, and pro_com.

CREATE TABLE ITEM_MAST
(
    PRO_ID INT NOT NULL,
    PRO_NAME VARCHAR(50) NOT NULL,
    PRO_PRICE FLOAT NOT NULL,
    PRO_COM INT NOT NULL
);

INSERT INTO ITEM_MAST VALUES (101, 'Mother Board', 3200.00, 15);
INSERT INTO ITEM_MAST VALUES (102, 'Key Board', 450.00, 16);
INSERT INTO ITEM_MAST VALUES (103, 'ZIP drive', 250.00, 14);
INSERT INTO ITEM_MAST VALUES (104, 'Speaker', 550.00, 16);
INSERT INTO ITEM_MAST VALUES (105, 'Monitor', 5000.00, 11);
INSERT INTO ITEM_MAST VALUES (106, 'DVD drive', 900.00, 12);
INSERT INTO ITEM_MAST VALUES (107, 'CD drive', 800.00, 12);
INSERT INTO ITEM_MAST VALUES (108, 'Printer', 2600.00, 13);
INSERT INTO ITEM_MAST VALUES (109, 'Refill cartridge', 350.00, 13);
INSERT INTO ITEM_MAST VALUES (110, 'Mouse', 250.00, 12);

SELECT pro_id, pro_name, pro_price, pro_com FROM ITEM_MAST WHERE pro_price BETWEEN 200 AND 600;


