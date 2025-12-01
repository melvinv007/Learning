import pandas as pd

# print(pd.__version__)

data = {'a':1,'b':2,'c':3} #any datatype
data = 'abcbde' #any datatype
data = [1,2,3,4,'r'] #any datatype
data = [100,85,90,200,165] #any datatype

# series = pd.Series(data, index=['apple','ball','cat','dog','elephant']) #Series constructor not function
series = pd.Series(data) #Series constructor not function

# print(series.loc['dog'])
# print(series.iloc[2])

# print(series[series>100])

#Dataframes

data = {'Name': ['Melvin','Sherin','Elvis'],
        'Age' : [20,19,20]}

df = pd.DataFrame(data)

df = pd.DataFrame(data,index=['Employee 1', 'Employee 2' ,'Employee 3'])

# print (df.loc['Employee 2'])
# print (df.iloc[2])

#adding a column 
df['Job'] = ["Video Editor","Photo Editor/ Co-host","Host"]

#adding a row
new_rows = pd.DataFrame([{'Name':'Varun','Age':19,'Job':'HR'},{'Name':'Kratin','Age':15,'Job':'HR'}],index = ['Employee 4','Employee 5'])

df = pd.concat([df,new_rows])

#CSV files
df = pd.read_csv('panda.csv',index_col="Name")

#JSON files
# df = pd.read_json('panda.json')

#selection
#by col

# print(df.columns)

# print(df["No"])
# print(df[['Height','Weight']])

#by row
# print(df.loc["Charizard"])
# print(df.loc["Charizard",['Height','Weight']])
# print(df.loc["Charizard":"Blastoise",['Height','Weight']])
# print(df)

# pokemon = input("Enter a pokemon name: ")
# try:
#     print(df.loc[pokemon])
# except KeyError:
#     print("DNE")

print(df[df['Height'] > 2])