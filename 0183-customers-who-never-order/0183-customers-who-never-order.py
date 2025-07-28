import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    # Get a set of customer IDs who placed orders
    ordered_customer_ids = set(orders['customerId'].unique())
    
    # Filter customers whose ID is not in the orders table
    no_order_customers = customers[~customers['id'].isin(ordered_customer_ids)]
    
    # Return only the customer names in a DataFrame with column name 'Customers'
    return no_order_customers[['name']].rename(columns={'name': 'Customers'})