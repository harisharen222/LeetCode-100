import pandas as pd

def meltTable(report: pd.DataFrame) -> pd.DataFrame:
    # Use pandas melt function
    return pd.melt(
        report,
        id_vars=['product'],         # columns to keep
        value_vars=['quarter_1','quarter_2','quarter_3','quarter_4'], 
        var_name='quarter',          # new column name for former headers
        value_name='sales'           # new column name for values
    )
