from typing import List
def input_type(value: str) -> str:
    if value.isalpha():
        return "string"
    elif value[0].isdigit():
        if(value.find('.')):
            return "double"
        else:
            return "integer"
    return value

