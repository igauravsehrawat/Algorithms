#!/usr/python/bin

from bs4 import BeautifulSoup
import urllib2 


url = urllib2.urlopen("https://www.practo.com/delhi/directory")
 
content = url.read()
 
soup = BeautifulSoup(content)
 
links = soup.findAll("a")
for link in soup.find_all('a'):
    print(link.get('href'))
