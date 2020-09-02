import wolframalpha

app_id = "APER4E-58XJGHAVAK"

client = wolframalpha.Client(app_id)

res = client.query("who is donald trump")
answer = (res.results) #to make sure wolramalpha gives answer in text and not in graph and all

print(answer)