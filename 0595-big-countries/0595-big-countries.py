import pandas as pd

def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    condition = (world['population'] >= 25_000_000) | (world['area'] >= 3_000_000)
    columns = ['name', 'population', 'area']
    return world.loc[condition, columns]
    