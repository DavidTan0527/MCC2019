prices = [418, 952, 850, 962, 379, 107, 98, 215, 371, 701]

# Stores the maximum price you can get for a coin on a given day
maximum_price = [0 for i in range(len(prices))]
maximum_price[-1] = prices[-1]

for i in range(len(prices)-2, -1, -1):
  # For every day (from the back) store the maximum price you can get on that day by comparing the maximum of the next day and today's price
  maximum_price[i] = max(prices[i], maximum_price[i+1])

total = 0
for price in maximum_price: 
  total = total + price

print(total)