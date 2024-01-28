# Write your MySQL query statement below
-- capital_gain_loss = selling_price - buying_price
SELECT stock_name, SUM(IF(operation = 'Sell', price, -price)) AS capital_gain_loss
FROM Stocks
GROUP BY stock_name