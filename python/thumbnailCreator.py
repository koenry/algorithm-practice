from PIL import Image
import os

images = os.listdir("New folder")
for w in images:
    
    image = Image.open("New folder\\"+w)
    image.thumbnail((360, 360), Image.ANTIALIAS)
    image.save(f"{w}")
