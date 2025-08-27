import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    # Filter animals where weight > 100
    heavy = animals[animals['weight'] > 100]
    
    # Sort by weight descending
    heavy = heavy.sort_values(by='weight', ascending=False)
    
    # Return only the 'name' column
    return heavy[['name']]
