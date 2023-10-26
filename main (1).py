def linear_search_product(products, target):
  indices = []
  for i, product in enumerate(products):
      if product == target:
          indices.append(i)
  return indices

# Example usage:
product_list = ["Product A", "Product B", "Product C", "Product A", "Product D"]
target_product = "Product A"

result = linear_search_product(product_list, target_product)

if result:
  print(f"The product '{target_product}' was found at indices: {result}")
else:
  print(f"The product '{target_product}' was not found.")
