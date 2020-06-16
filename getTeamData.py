import pandas as pd
import re
import requests
from bs4 import BeautifulSoup as bs
mystring = ""
teamNames = ["NYY", "LAA", "LAD", "SDP", "DET", "BAL", "BOS", "TBD", "TOR", "CHW", "CLE", "KCR", "MIN", "HOU", "OAK", "SEA", "TEX", "ATL", "FLA", "NYM", "PHI", "WSN", "CHC", "CIN", "MIL", "PIT", "STL", "ARI", "COL", "SFG"]
years = ["2005", "2006", "2007", "2008", "2009"]
mylinks = []       
for i in teamNames:
	for j in years:
                webpage = requests.get(f"https://www.baseball-reference.com/teams/{i}/{j}.shtml")
                src = webpage.content
                soup = bs(src, "html.parser")
                x = soup.find("h1")
                y = list(x.text)
                z= ''.join(y)
                print(z.replace("\n", " "))
