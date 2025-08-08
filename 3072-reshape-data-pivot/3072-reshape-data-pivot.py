import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
    # Pivot the table
    result = weather.pivot(index='month', columns='city', values='temperature')
    
    # Remove column name from pivot (optional for cleaner look)
    result.columns.name = None
    
    return result
