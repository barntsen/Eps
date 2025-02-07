import re

text = 'Abc\n\n\n\ndef\nGhijk\n\nLmnop\nhello'
print(text)
text = re.sub('[\n]+', '\n\n', text) #
print("***")
print(text)
