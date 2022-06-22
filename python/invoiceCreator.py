import xml.etree.ElementTree as ET
import os, sqlite3
from pathlib import Path

file = None
# find the xml file and remove the .xml from its filename
for items in os.listdir():
	if items.endswith('.xml'):
		file = items.replace('.xml', '')
print(file)

tree = ET.parse('sask.xml')
root = tree.getroot()
array = [0,6,7,10, 5]
fileName = ''
dirArr = []
for w in array:
	fileName = f'{fileName}{root[7][w][1].text}_'
	dirArr.append(root[7][w][1].text)	
# :-1 remove the last underscore after for loop
os.rename(f'{file}.pdf',f'{fileName[:-1]}.pdf')
# we will use path var when saving data to db

# the dirArr is spliced so we get a month and year as single var
path = f'archive/{dirArr[4][:-6]}/{dirArr[4][5:][:-3]}/{dirArr[0]}'
Path(path).mkdir(parents=True, exist_ok=True)

# create if it does not exists a db and a table
# execute query
# commit changes
conn = sqlite3.connect("uzd.db") 
cursor = conn.cursor() 
cursor.execute("""CREATE TABLE if not exists  prekes
                  (pirkejas text, kodas text, suma text, 
                   data text, path text)""")
query = f"INSERT INTO prekes VALUES('{array[0]}','{array[1]}','{array[3]}','{array[4]}','{path}')"
cursor.execute(query)
conn.commit()

