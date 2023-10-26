def linear_search_product(products, target):
  indices = []
  for i in range(len(products)):
      if products[i] == target:
          indices.append(i)
  return indices

# Example usage:
product_list = ["Product A", "Product B", "Product C", "Product A", "Product D"]
target_product = "Product A"

result = linear_search_product(product_list, target_product)

if result:
  print("Product found at indices:", result)
else:
  print("Product not found.")
