# 1. Create an empty Dictionary.
inventory={}

# 2. Store the first product details in variable: Product Name = Mobile Phone
#  Product Quantity = 5 Product Price = 20000 Product Release Year = 2020 
p1_name = "Mobile Phone"
p1_quantity = 5
p1_price = 20000
p1_release_year = 2020

# 3. Add details in inventory
inventory[p1_name] = {
    "Quantity": p1_quantity,
    "Price": p1_price,
    "Release Year": p1_release_year
}
# 4. Store the Second Product details in variable
p2_name = "Laptop"
p2_quantity = 3
p2_price = 70000
p2_release_year = 2025

#  5. Ass the item details in inventory
accessed_item = inventory.get(p1_name)
print(f"Details for {p1_name}: {accessed_item}")

# 6. Display the products present in inventory
print("\n---Current Inventory ---")
for product, details in inventory.items():
    print(f"{product}: {details}")

# 7. Check if ProductNo1_releaseYear and ProductNo2_releaseYear are in inventory. 
print("\n---Checking for Release Year ---")
has_p1_year = "Release Year" in inventory.get(p1_name, {})
has_p2_year = "Release Year" in inventory.get(p2_name, {})

print(f"Does {p1_name} have a release year listed in inventory? {has_p1_year}")
print(f"Does {p2_name} have a release year listed in inventory? {has_p2_year}")


# 8. Delete release year of both the products from the inventory
if has_p1_year:
    del inventory[p1_name]["Release Year"]
if has_p2_year:
    del inventory[p2_name]["Release Year"]

print("\n Inventory after deleting Release Years ")
for product, details in inventory.items():
    print(f"{product}: {details}")


    # part b
   # Part B - Tuples You are given a tuple of product prices in a store. Perform the following operations using Python: 
   # Create a tuple called prices containing the following values: (250, 300, 150, 400, 100, 350, 200)
   #  Find and print the highest and lowest price. Calculate and print the total sum of all prices. Convert the tuple into sorted list
   #  (ascending order) and print it. Try to modify an element in the tuple and explain what happens
# 1. Create a tuple called prices containing the values
prices = (250, 300, 150, 400, 100, 350, 200)

# 2. Find and print the highest and lowest price
highest_price = max(prices)
lowest_price = min(prices)
print(f"Highest price: {highest_price}")
print(f"Lowest price: {lowest_price}")

# 3. Calculate and print the total sum of all prices
total_sum = sum(prices)
print(f"Total sum of prices: {total_sum}")

# 4. Convert the tuple into a sorted list (ascending order) and print it
# The sorted() function automatically returns a new sorted list from any iterable.
sorted_prices_list = sorted(prices)
print(f"Sorted list of prices: {sorted_prices_list}")

# 5. Try to modify an element in the tuple
print("\n Attempting to modify the tuple ")
try:
    prices[0] = 500
except TypeError as error_message:
    print(f"Tuples is immutable.Tuples provide a guarantee that the data will not be accidentally altered by another function in your program. Error: {error_message}")